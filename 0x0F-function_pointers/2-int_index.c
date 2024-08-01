#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 * @array: A pointer that holds the array.
 * @size: The size of the passed array.
 * @cmp: A pointer to a function that takes an argument (int), returns int.
 *
 * Return: The index of the 1st element matches
 *         -1, If no element matches OR `size <= 0`
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array != NULL && cmp != NULL)
	{
		for (index = 0; index < size; index++)
			if (cmp(array[index]) == 1)
				return (index);
	}

	return (-1);
}
