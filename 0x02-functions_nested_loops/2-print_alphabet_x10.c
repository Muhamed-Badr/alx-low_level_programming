#include "main.h"

/**
 * print_alphabet - Utility Function 
 * that printes 10 times the alphabet characters in lowercase 'a' -> 'z'
 * using '_putchar(char c)' function
 */
void print_alphabet_x10(void)
{
	char c = 'a', n = '0';

	while (n++ <= '9')
	{
		while (c <= 'z')
			_putchar(c++);

		_putchar('\n');
		c = 'a';
	}
}
