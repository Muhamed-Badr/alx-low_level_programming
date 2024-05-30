#include "main.h"
int _isdigit_str(char *s);
int _strlen(char *s);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
char *infinite_mul(char *n1, char *n2, char *r, int size_r);
/*char *multiple_infinite_mul(int numc, char **numv);*/

/**
 * main - entry point
 *
 * Return: On success, 1
 *         On failure OR if `argc != 3 || argv[1] &
 *                                        argv[2] not digits`, 98
 */
int main(int argc, char **argv)
{
	char *result;

	if (argc != 3)
	{
		puts("Error");
		exit(98);
	}

	result = _mul((argc - 1), (argv + 1));
	printf("%s\n", result);

	free(result);

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
		if (s[i] < '0' && s[i] > '9')
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
 * Return: On success, pointer to `r` (buffer)
 *         On failure, 0
 */
char *infinite_mul(char *n1, char *n2, char *r, int size_r)
{
	short int tmp = 0, n1_len, n2_len, res_len, i, j;
	char *tmp_buf1, *tmp_buf2;

	/* get the length of `n1` and `n2` */
	n1_len = _strlen(n1);
	n2_len = _strlen(n2);
	/*
	 * #-> why `res_len = n1_len + n2_len` ?
	 * Because: in mul operation, the number of digits of
	 *   operation result can't exceed the `sum(n1_len, n2_len)`
	 * There are 2 cases:
	 *   1. if there is no a carry:
	 *        SO: `res_len = sum(n1_len, n2_len) - 1`
	 *   2. if there is a carry:
	 *        SO: `res_len = sum(n1_len, n2_len)`
	 */
	/* by assuming that there would not be a carry digit */
	res_len = n1_len + n2_len - 1 ;

	/*check if the size of buffer is enough to hold the add operation result*/
	if (res_len + 1 > size_r)
		return (0);

	tmp_buf1 = calloc(res_len, sizeof(*tmp_buf1));

	for (i = n1_len - 1; i >= 0; i--)
	{
		for (j = n2_len - 1; j >= 0; j--)
		{
			if (n1_len > 0 && n2_len > 0)
				tmp = ((n1[--n1_len] - '0') + (n2[--n2_len] - '0')) + (tmp / 10);
			else if (n1_len > 0)
				tmp = (n1[--n1_len] - '0') + (tmp / 10);
			else if (n2_len > 0)
				tmp = (n2[--n2_len] - '0') + (tmp / 10);
		}

		r[i] = (tmp % 10) + '0';
	}
	
	r[res_len] = '\0'; /* set the `r` termination null */
	
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




























