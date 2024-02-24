#include "main.h"

/**
 * puts_half - prints the second half of the string, followed by a new line.
 * @str: pointer to the passed string
 *
 * Return: Nothing (void)
 */
void puts_half(char *str)
{
	int len = 0, n;

	while (str[len])
		len++;

	n = (len + 1) / 2;

	while (n < len)
		_putchar(str[n++]);

	/*
	 *   2nd sol
	 *
	 *   while (*str++)
	 *       len++;
	 *
	 *   str--; // return 'str' to last 'char' (\0)
	 *
	 *   n = len / 2;
	 *
	 *	 // you can use the below 2 lines for debugging
	 *	 printf("len: %d\nn: %d\n", len, n);
	 *	 printf("*str: %c\n*(str - 1): %c\n", *str, *(str - 1));
	 *
	 *   while (n > 0)
	 *       _putchar(*(str - n--));
	 */

	_putchar('\n');
}
