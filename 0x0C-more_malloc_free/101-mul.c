#include "main.h"
int _isdigit_str(char *s);
int _strlen(char *s);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
char *infinite_mul(char *n1, char *n2, char *r, int size_r);
/* char *multiple_infinite_mul(int numc, char **numv); */

/**
 * main - entry point
 * @argc: Holds the number of passed CLI arguments
 * @argv: Array of pointers contains the program passed CLI arguments
 *
 * Return: On success, 1
 *         On failure OR if `argc != 3 || argv[1] OR
 *                                        argv[2] not digits`, 98
 */
int main(int argc, char **argv)
{
	short int res_len;
	char *res;

	if (!(argc == 3 &&\
				_isdigit_str(argv[1]) == 0 &&\
				_isdigit_str(argv[2]) == 0))
	{
		puts("Error");
		exit(98);
	}

	/*
	   result = _mul((argc - 1), (argv + 1));
	   printf("%s\n", result);
	   */

	res_len = (_strlen(argv[1]) + _strlen(argv[2]) + 1);
	res = malloc(res_len * sizeof(*res));
	if (res == NULL)
		exit(98);

	infinite_mul(argv[1], argv[2], res, res_len);
	printf("%s\n", res);

	free(res);

	return (0);
}

/**
 * _isdigit_str - checks if the string is composed of digits only.
 * @s: The string to check
 *
 * Return: 1 if the `s` is composed of digits. 0 otherwise
 */
int _isdigit_str(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] < '0' || s[i] > '9')
			return (1);

	return (0);
}

/**
 * _strlen - returns the length of a string
 * @s: pointer to the passed string
 *
 * Return: length of the passed string
 */
int _strlen(char *s)
{
	int length = 0;

	/* s[length] == *(s + length) */

	while (s[length])
		length++;

	return (length);
}

/**
 * infinite_add - adds two numbers (including the huge numbers)
 * @n1: pointer to 1st number
 * @n2: pointer to 2nd number
 * @r: The buffer to store the result
 * @size_r: The buffer size
 *
 * Note: i'm not handle the case when:
 *         1. if `n1 = NULL || n2 = NULL`
 *         2. if `n1 = "" || n2 = ""`
 *         3. if `n1 || n2` not digits
 *       SO: the behavior will be  undefined
 *
 * Return: On success, pointer to `r` (buffer)
 *         On failure, 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	short int tmp = 0, n1_len, n2_len, res_len, i;

	/* get the length of `n1` and `n2` */
	n1_len = _strlen(n1);
	n2_len = _strlen(n2);

	/*
	 * #-> why `res_len = n1_len || res_len = n2_len` ?
	 * Because: in add operation, the number of digits of
	 *   operation result can't exceed the `max(n1_len, n2_len) + 1`
	 * There are 2 cases:
	 *   1. if there is no a carry:
	 *        SO: `res_len = max(n1_len, n2_len)`
	 *   2. if there is a carry:
	 *        SO: `res_len = max(n1_len, n2_len) + 1`
	 */
	/* by assuming that there would not be a carry digit */
	if (n1_len >= n2_len)
		res_len = n1_len;
	else
		res_len = n2_len;
	/*check if the size of buffer is enough to hold the add operation result*/
	if (res_len + 1 > size_r)
		return (0);
	r[res_len] = '\0'; /* set the `r` termination null */

	for (i = res_len - 1; i >= 0; i--)
	{
		if (n1_len > 0 && n2_len > 0)
			tmp = ((n1[--n1_len] - '0') + (n2[--n2_len] - '0')) + (tmp / 10);
		else if (n1_len > 0)
			tmp = (n1[--n1_len] - '0') + (tmp / 10);
		else if (n2_len > 0)
			tmp = (n2[--n2_len] - '0') + (tmp / 10);

		r[i] = (tmp % 10) + '0';
	}
	if (tmp / 10) /* check if there is a carry */
	{
		/* check if the size of buffer is enough to hold carry digit */
		if (res_len + 2 > size_r)
			return (0);
		r[res_len + 1] = '\0'; /* set the `r` new termination null */
		for (i = res_len; i > 0; i--)/* shift elements one position */
			r[i] = r[i - 1];
		r[i] = (tmp / 10) + '0';
	}
	return (r);
}

/**
 * infinite_mul - multiplies two numbers (including the huge numbers)
 * @n1: pointer to 1st number
 * @n2: pointer to 2nd number
 * @r: The buffer to store the result
 * @size_r: The buffer size
 *
 * Note: I make this function implementation depending on
 *        "Math - long multiplication" you can search about this topic
 *       i will provide you with some videos:
 *           1. [Ar]: https://youtu.be/jdJ0bQiLwNo?si=4yqPndgtPxjqTlSS
 *           2. [En]: https://youtu.be/GKetIwxaenA?si=IIesz-UsXBcTDavZ
 *
 * Return: On success, pointer to `r` (buffer)
 *         On failure, 0
 */
char *infinite_mul(char *n1, char *n2, char *r, int size_r)
{
	short int tmp, n1_len, n2_len, i, j, align/*, res_len, tmp_buf_len*/;
	char *tmp_buf;

	*r = '\0'; /* init the result buffer */

	/* get the length of `n1` and `n2` */
	n1_len = _strlen(n1);
	n2_len = _strlen(n2);

	/*
	 *====START_1=============================================================
	 * These lines are used for handling result buffer `r` &
	 *  it is additional here (you can remove it),
	 *  because i'm using the `infinite_add()` function & it do this part
	 */

	/*
	 * [Comment]
	 * #-> why `res_len = n1_len + n2_len` ?
	 * Because: in mul operation, the number of digits of
	 *   operation result can't exceed the `sum(n1_len, n2_len)`
	 * There are 2 cases:
	 *   1. if there is no a carry:
	 *        SO: `res_len = sum(n1_len, n2_len) - 1`
	 *   2. if there is a carry:
	 *        SO: `res_len = sum(n1_len, n2_len)`
	 */

	/*
	 * [Comment]
	 * we will go in the safe way and take the max number of digits
	 *  that may result from the mul operation,
	 * in another way, we assume that there would be a carry digit
	 */
	/* res_len = n1_len + n2_len; */

	/*
	 * [Comment]
	 * check if the size of buffer is enough to hold the mul operation result
	 */
	/*
	   if (res_len + 1 > size_r)
	   return (0);
	   */
	/*====END_1===========================================================*/

	/* tmp_buf_len = n1_len + n2_len; */
	tmp_buf = calloc((n1_len + n2_len) + 1, sizeof(*tmp_buf));

	/* Loop on number `n2` digits */
	for (i = n2_len - 1, align = 0; i >= 0; i--, align++)
	{
		tmp = 0;

		/* Loop on number `n1` digits */
		for (j = n1_len - 1; j >= 0; j--)
		{
			tmp = ((n2[i] - '0') * (n1[j] - '0')) + (tmp / 10);
			tmp_buf[j] = (tmp % 10) + '0';
		}

		/* Alignment the number (add 0's at the end of it) */
		for (j = 0; j < align; j++)
			tmp_buf[n1_len + j] = '0';
		tmp_buf[n1_len + align] = '\0';

		if (tmp / 10) /* Check if there is a carry number */
		{
			/*
			 * Shift elements one position &
			 *  store the carry at the start of the number
			 */
			for (j = (n1_len + align + 1); j > 0; j--)
				tmp_buf[j] = tmp_buf[j - 1];
			tmp_buf[j] = (tmp / 10) + '0';
		}

		/*
		 * [Debug 1]: These lines are used for debugging &
		 *             show how this function `infinite_mul()` works
		 * puts("\t\t+=============+");
		 * printf("\t\t| at Time [%d] |\n", ((n2_len - 1) - i));
		 * puts("\t\t+=============+");
		 * printf("`tmp_buf` content: %s\n", tmp_buf);
		 * printf("`r` content      : %s\n", r);
		 * printf("[add]: (%s + %s)\n", tmp_buf, r);
		 */

		if (infinite_add(tmp_buf, r, r, size_r) == 0)
			return (0);

		/*
		 * [Debug 1-cont...]
		 * puts("[After add operation]");
		 * printf("`tmp_buf` content: %s\n", tmp_buf);
		 * printf("`r` content      : %s\n", r);
		 */
	}

	/*
	 * If the result of `n1 * n2` equal to '0'
	 *  SO: the content of `r` will be multiple numbers of 0's &
	 *       the output will be "000000..."
	 *      where the correct output must be "0"
	 * For this reason, we below set the termination null('\0')
	 *  after the 1st '0'
	 */
	if (r[0] == '0')
		r[1] = '\0';

	free(tmp_buf);

	return (r);
}

/*
 * with the below function i want to mul a vector of numbers
 * that will be passd as `numv`
 */
/*
   char *multiple_infinite_mul(int numc, char **numv)
   {
   short int num_len, r_len;
   char *r, tmp_buf;

   }
   */

