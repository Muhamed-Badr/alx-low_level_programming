#include "main.h"

/**
 * _puts_recursion - prints a string (using recursion),
 *                   followed by a new line.
 * @s: pointer to the passed string
 *
 * Return: Nothing (void)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
