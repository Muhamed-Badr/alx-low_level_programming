#include "main.h"

/**
 * create_array - creates an array of chars,
 *                  and initializes it with a specific char 'c'.
 * @size: The size of an array
 * @c: The initialization char
 *
 * Return: On success, pointer to the allocated array
 *         On failure OR if `size == 0`, NULL('\0')
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(*array) * size);

	if (size == 0 || array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
