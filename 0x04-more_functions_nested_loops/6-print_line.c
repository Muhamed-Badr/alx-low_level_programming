#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: The number of times the character '_' should be printed
 *
 * Example:
 *	-> n = 1
 *	output(n = 1):
 *	_
 *	======
 *	-> n = 3
 *	output(n = 3):
 *	___
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');

	_putchar('\n');
}
