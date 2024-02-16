#include "main.h"

/**
 * print_square - draws a square on the terminal using the character '#'
 * @size: The size of the square
 *
 * Example:
 *	-> n = 2
 *	output(n = 2):
 *	##
 *	##
 *	======
 *	-> n = 5
 *	output(n = 5):
 *	#####
 *	#####
 *	#####
 *	#####
 *	#####
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');

		_putchar('\n');
	}
}
