#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array pointer parameter
 * @n: The size of array elements
 *
 * Return: Nothing (void)
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	i = -1;
	j = n;

	while (++i < --j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
