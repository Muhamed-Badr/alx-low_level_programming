#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: 1nd pointer parameter
 * @src: 2st pointer parameter
 *
 * Description: This function appends the 'src' string to the 'dest' string,
 * overwriting the terminating null byte (\0) at the end of 'dest',
 * and then adds a terminating null byte
 *
 * Return: pointer to new 'dest'
 */
char *_strcat(char *dest, char *src)
{
	int i, dest_len;

	/* get the length of 'dest' string */
	for (i = 0, dest_len = 0; dest[i]; dest_len++, i++)
		;

	for (i = 0; src[i]; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
