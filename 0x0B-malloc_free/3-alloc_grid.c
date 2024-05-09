#include "main.h"

/**
 * alloc_grid - Allocate a 2D dynamic array of integers.
 * @width: array width (number of array columns)
 * @height: array height (number of array rows)
 *
 * Description: we allocate a 2D array and name it 'arr',
 *              it store integer values in a grid-like structure.
 *
 * 1. Allocate memory for a 1D array of pointers named `**arr` (rows):
 *     **arr -> it's a 1D array of pointers,
 *              represent the 2D array rows
 *
 *         +--------+--------+-------+------------+
 * arr --> | arr[0] | arr[1] | . . . | arr[row-1] |
 *         +--------+--------+-------+------------+
 *
 * 2. Allocate memory for each row (array of elements):
 *     arr[0] ... arr[row-1] -> they are 1D arrays of integer values,
 *                              represent the 2D array columns
 *
 *            +-----------+-----------+-------+--------------------+
 * arr[0] --> | arr[0][0] | arr[0][1] | . . . | arr[0][column - 1] |
 *            +-----------+-----------+-------+--------------------+
 * arr[1] --> | arr[1][0] | arr[1][1] | . . . | arr[1][column - 1] |
 *     .      +-----------+-----------+-------+--------------------+
 *     .
 *     .          +--------------+--------------+-------+---------------------+
 * arr[row-1] --> |arr[row-1][0] |arr[row-1][1] | . . . | arr[row-1][column-1]|
 *                +--------------+--------------+-------+---------------------+
 *
 * 3. Accessing elements:
 *     access each element by its row and column `arr[row][column]`
 *
 * summary: 2D array it's an array of arrays
 *           which means depends on our description that's the,
 *           - `**arr` -> it's an array of pointers, its content an addresses
 *                        of a number of 1D arrays of integers
 *           - arr[0] ... arr[row-1] -> they are arrays of integers, their
 *                                      content a number of integer values
 *           - arr[0][0] ... arr[row-1][column-1] -> integer values
 *
 * Return: On success, pointer to allocated 2D array.
 *         On failure OR if `width <= 0 || height <= 0`, NULL('\0').
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate memory for a 1D array of pointers (rows) */
	arr = malloc(sizeof(*arr) * height);
	if (arr == NULL)
		return (NULL);

	/*
	 * Allocate memory for each row (1D arrays of integers / columns)
	 * and initialize all grid elements to `0`
	 */
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(**arr) * width);
		/*
		 * free any previously allocated rows if one of the rows = NULL (one
		 * of the rows cannot be allocated due to insufficient memory space.)
		 * in another way:
		 *      no enough memory space to be allocate for all rows.
		 */
		if (arr[i] == NULL)
		{
			/* free previously allocated rows */
			for (i--; i >= 0; i--)
				free(arr[i]);

			free(arr); /* free allocated array of pionters */
			return (NULL);
		}

		/* initialization process */
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}

	return (arr);
}
