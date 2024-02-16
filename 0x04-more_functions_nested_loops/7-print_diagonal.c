#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: The number of times the character '\' should be printed
 *
 * Example:
 *	-> n = 2
 *	output:
 *	\
 *   \
 *	======
 *	-> n = 5
 *	output:
 *	\
 *   \
 *    \
 *     \
 *      \
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		j = i;

		while (j--)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}
