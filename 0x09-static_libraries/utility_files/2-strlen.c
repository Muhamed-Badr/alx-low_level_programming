#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to the passed string
 *
 * Return: length of the passed string
 */
int _strlen(char *s)
{
	int length = 0;

	/* s[length] == *(s + length) */

	while (s[length])
		length++;

	return (length);
}
