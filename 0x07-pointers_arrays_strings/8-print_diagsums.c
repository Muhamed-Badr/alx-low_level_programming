#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: pointer to integers
 * @size: The size of square matrix
 *
 * Return: Nothing (void)
 */
void print_diagsums(int *a, int size)
{
	int i, j, main_diag_sum = 0, secondary_diag_sum = 0;

	i = 0;
	j = (size - 1);

	while (i < (size * size))
	{
		main_diag_sum += a[i];
		secondary_diag_sum += a[j];

		i += (size + 1);
		j += (size - 1);
	}

	printf("%d, %d\n", main_diag_sum, secondary_diag_sum);
}
