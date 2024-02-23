#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: 1st integer pointer to 'int'
 * @b: 2nd integer pointer to 'int'
 *
 * Return: Nothing (void)
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
