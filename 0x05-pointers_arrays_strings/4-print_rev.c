#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: pointer to the passed string
 *
 * Return: Nothing (void)
 */
void print_rev(char *s)
{
	int i = 0;

	/*
	 * finds the length of string without null character
	 * and move 's' to the last characters in string '\0'
	 */
	/* for (i = 0; *s; i++, s++); */
	while (*s)
	{
		i++;
		s++;
	}

	while (i--)
		_putchar(*--s);

	_putchar('\n');
}
