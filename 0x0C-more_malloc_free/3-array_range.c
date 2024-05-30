#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: start value of array (1st element in array)
 * @max: end value of array (last element in array)
 *
 * Description: The created array contains all the values from `min` (included)
 *              to `max` (included), ordered from `min` to `max`
 *
 * Return: On success, pointer to the created array
 *         On failure OR if `min > max`, NULL('\0')
 */
int *array_range(int min, int max)
{
	int i, *array, size;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	/* array = calloc(size, sizeof(*array)); */
	array = malloc(size * sizeof(*array));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size ; i++)
		array[i] = (i + min);

	return (array);
}
