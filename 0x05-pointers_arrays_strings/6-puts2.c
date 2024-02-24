#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: pointer to the passed string
 *
 * Return: Nothing (void)
 */
void puts2(char *str)
{
	int len = 0;

	for (len = 0; str[len]; len++)
		if (len % 2 == 0)
			_putchar(str[len]);

	/*
	 *	2nd sol
	 *
	 *  while (*str++)
	 *		len++;
	 *
	 *	str--; // return 'str' to last 'char' (\0)
	 *
	 *	while (len >= 0)
	 *	{
	 *		_putchar(*(str - len));
	 *		len -= 2;
	 *	}
	 */

	_putchar('\n');
}
