#include "main.h"

/**
 * free_grid - frees a 2D dynamic array that was previously allocated
 *             by our function `alloc_grid()` in previous task (3-alloc_grid.c)
 * @grid: The 2D dynamic array
 * @height: the array height (array rows)
 *
 * Return: Nothing(void).
 */
void free_grid(int **grid, int height)
{
	if (grid == NULL)
		return;

	/* free 2D array rows (1D arrays of integers) */
	while (height > 0)
		free(grid[--height]);
	free(grid); /* free allocated array of pointers */
}
