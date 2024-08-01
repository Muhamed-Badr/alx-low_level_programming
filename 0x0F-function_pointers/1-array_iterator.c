#include "function_pointers.h"

/**
 * array_iterator - Perform a specific action on each element of an array
 *                   using function callback.
 * @array: A pointer that holds the array.
 * @size: The size of the passed array.
 * @action: A pointer to a function that takes an argument (int), returns void.
 *
 * Return: Nothing (void).
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
