#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: pointer to 1st number
 * @n2: pointer to 2nd number
 * @r: The buffer to store the result
 * @size_r: The buffer size
 *
 * Return: pointer to r (buffer)
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	short int tmp = 0, n1_len = 0, n2_len = 0, res_len, i;

	/* get the length of n1 */
	while (n1[n1_len])
		n1_len++;
	/* get the length of n2 */
	while (n2[n2_len])
		n2_len++;
	/*by assuming that there would not be a carry digit*/
	if (n1_len >= n2_len)
		res_len = n1_len;
	else
		res_len = n2_len;
	/*check if the size of buffer is enough to hold the add operation result*/
	if (res_len + 1 > size_r)
		return (0);
	r[res_len] = '\0'; /* set the r termination null */

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
	if (tmp / 10) /*check if there is a carry*/
	{
		/*check if the size of buffer is enough to hold carry digit*/
		if (res_len + 2 > size_r)
			return (0);
		r[res_len + 1] = '\0'; /* set the r new termination null */
		for (i = res_len; i > 0; i--)/* shift elements one position */
			r[i] = r[i - 1];
		r[i] = (tmp / 10) + '0';
	}
	return (r);
}
