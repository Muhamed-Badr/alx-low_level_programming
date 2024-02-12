#include "main.h"

/**
 * print_alphabet - Utility Function
 * that printes the alphabet characters in lowercase 'a' -> 'z'
 * using '_putchar(char c)' function
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
		_putchar(c++);
	_putchar('\n');
}
