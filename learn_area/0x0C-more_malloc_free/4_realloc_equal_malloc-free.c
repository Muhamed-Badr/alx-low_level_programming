#include <stdio.h>
#include <stdlib.h>

void printArray(int *arr, int size)
{
	int i;

	for (i = 0; i < size; ++i)
		printf("%d ", arr[i]);
	printf("\n");
}

int main(void)
{
	int i, *a;

	/* Scenario 1: Allocating new memory */
	a = NULL, size, freed_elements_from_end;

	printf("enter array size: ");
	scanf("%d", &size);
	printf("enter the number of freed elements from end: ");
	scanf("%d", &freed_elements_from_end);

	a = realloc(NULL, size * sizeof(*a));
	if (a == NULL)
	{
		perror("Failed to allocate memory");
		return (EXIT_FAILURE);
	}
	for (i = 0; i < size; ++i)
		a[i] = i + 1;

	printf("After allocating new memory at [%p]: ", a);
	printArray(a, size);

	/*
	 * Scenario 2:
	 *            Freeing some memory (Shrinking an allocated block)
	 *            in case of (size == freed_elements_from_end)
	 *            this case the same with `free(a);`
	 */
	a = realloc(a, sizeof(*a) * (size - freed_elements_from_end));

	printf("After free last %d elements the new block at [%p]: ",\
			freed_elements_from_end, a);
	printArray(a, (size - freed_elements_from_end));

	/* Free the memory before exiting */
	/* `free(a);` */

	return (0);
}

