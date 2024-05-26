#include <stdio.h>
#include <stdlib.h>
void set_array_elements(int *arr, int size, int position);
void print_array(int *arr, int size);

int main(void)
{
	int *a = NULL,
		size = 5,
		size_after_shrink = 3,
		size_after_expand = 10;

	/*
	 * Scenario 1:
	 *            Allocating new memory like `malloc()`
	 *            `a = malloc(sizeof(*a) * size);`
	 */
	a = realloc(NULL, sizeof(*a) * size);
	if (a == NULL)
	{
		perror("Failed to allocate memory");
		return (EXIT_FAILURE);
	}

	/* set array elements depending on its size */
	set_array_elements(a, size, 0);

	printf("After allocating new memory         : ");
	print_array(a, size);

	/*
	 * Scenario 2:
	 *            Expanding an allocated block
	 *            add an extra block of memory to the old allocated one
	 */
	a = realloc(a, sizeof(*a) * size_after_expand);
	if (a == NULL)
	{
		perror("Failed to expand memory");
		return (EXIT_FAILURE);
	}

	/* set array elements depending on its size */
	/*
	 * this statement
	 *    `set_array_elements(a, size_after_expand, 0)`
	 * is equal to this one
	 *    `set_array_elements(a, size_after_expand, size);`
	 * but with some repeated initialization steps where we already previously
	 * initialize the first (size) elements in (Scenario 1:)
	 */
	set_array_elements(a, size_after_expand, size);

	printf("After expanding the memory block &\n\t\tadd %d elements      : ",\
			(size_after_expand - size));
	print_array(a, size_after_expand);

	/*
	 * Scenario 3:
	 *            Shrinking an allocated block (Freeing some memory)
	 *            this will free from end the block of size
	 *            = (sizeof(*a) * (size_after_expand - size_after_shrink))
	 */
	a = realloc(a, sizeof(*a) * size_after_shrink);
	if (a == NULL)
	{
		perror("Failed to shrink memory");
		return (EXIT_FAILURE);
	}

	printf("After shrinking the memory block &\n\t\tfree last %d elements: ",\
			(size_after_expand - size_after_shrink));
	print_array(a, size_after_shrink);

	/*
	 * Scenario 4:
	 *            Freeing memory like `free()`
	 */
	a = realloc(a, 0);
	if (a != NULL)
	{
		perror("Failed to free memory");
		return (EXIT_FAILURE);
	}
	printf("Memory freed.\n");

	/* Free the memory before exiting */
	/* free(a); */

	return (0);
}

void set_array_elements(int *arr, int size, int position)
{
	for (; position < size; ++position)
		arr[position] = (position + 1);
}

void print_array(int *arr, int size)
{
	int i;

	for (i = 0; i < size; ++i)
		printf("%d ", arr[i]);
	printf("\n");
}
