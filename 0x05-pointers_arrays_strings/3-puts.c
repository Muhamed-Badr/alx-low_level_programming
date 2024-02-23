#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: pointer to the passed string
 *
 * Return: Nothing (void)
 */
void _puts(char *str)
{
	/* str[length] == *(str + length) */

	/*
	 * also in case of pointer to 'char':
	 * * str[length] == *(str + length) == *str++ *
	 * because `char *str;` as if we creat an array of 'char'
	 * so:
	 * - when we increment 'str' (str++)
	 *   it moves one position (next element in array)
	 * then:
	 * - dereferencing it (*str)
	 * we get the value of the next element in array
	 */

	while (*str)
		_putchar(*++str);

	_putchar('\n');
}
