#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: 1nd pointer parameter
 * @src: 2st pointer parameter
 * @n: The number of concatenated bytes from 'src'
 *
 * Description: The '_strncat' function is similar to the '_strcat' function,
 * except that
 *  > it will use at most 'n' bytes from 'src'; and
 *  > 'src' doesn't need to be null-terminated if it contains 'n' or more bytes
 *
 * Return: pointer to new 'dest'
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, dest_len;

	/* get the length of 'dest' string */
	for (i = 0, dest_len = 0; dest[i]; dest_len++, i++)
		;

	for (i = 0; i < n && src[i]; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
