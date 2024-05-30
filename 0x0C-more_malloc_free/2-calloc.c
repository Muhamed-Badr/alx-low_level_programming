#include "main.h"
char *_memset(char *s, char b, unsigned int n);

/**
 * _calloc - allocates memory for an array, using `malloc()`.
 * @nmemb: the number of array elements
 * @size: the size of each array element
 *
 * Description: This function allocates memory for an array
 *              of `nmemb` elements of `size` bytes each element,
 *              the allocated memory is set to zero.
 *
 * Return: On success, pointer to the allocated memory
 *         On failure OR if `nmemb == 0 || size == 0`, NULL('\0')
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem_block;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem_block = malloc(nmemb * size);
	if (mem_block == NULL)
		return (NULL);

	_memset(mem_block, '\0', (nmemb * size));

	return (mem_block);
}

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to memory area
 * @b: constant byte
 * @n: bytes to fills
 *
 * Return: pointer to the memory area 's'
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
