#include "main.h"

/**
 * _strncpy - copies a strings
 * @dest: 1nd pointer parameter
 * @src: 2st pointer parameter
 * @n: The number of copied bytes from 'src'
 *
 * Return: pointer to new 'dest'
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* copies n bytes from 'src' (n <= 'src' bytes) */
	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];

	/* if (n > 'src') bytes writes additional null bytes ('\0') to 'dest' */
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
