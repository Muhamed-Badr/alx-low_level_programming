#include "main.h"

/**
 * _memcpy - copies memory area from 'src' to 'dest'.
 * @src: pointer to src memory area
 * @dest: pointer to dest memory area
 * @n: bytes to copies
 *
 * Return: pointer to the memory area 'dest'
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
