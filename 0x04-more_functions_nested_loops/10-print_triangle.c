#include "main.h"

/**
 * print_triangle - draws a triangle on the terminal using the character '#'
 * @size: The size of the triangle
 *
 * Example:
 *  -> n = 1
 *  output(n = 1):
 *  #
 *  ======
 *  -> n = 2
 *  output(n = 2):
 *   #
 *  ##
 *  ======
 *  -> n = 5
 *  output(n = 5):
 *      #
 *     ##
 *    ###
 *   ####
 *  #####
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j < (size - i))
				_putchar(' ');
			else
				_putchar('#');
		}

		_putchar('\n');
	}
}
