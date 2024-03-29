#include "../main.h"
#include <stdio.h>

/**
 * print_array - print passed array to StdOut
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};
	/*
	 * int b[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337, 500};
	 * int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	 * int b[] = {0, 1, 2, 3, 4, 5, 6, 7, 8}
	 */

	/* printf("size of a: %lu\n", sizeof(a) / sizeof(int)); */
	print_array(a, sizeof(a) / sizeof(int));
	reverse_array(a, sizeof(a) / sizeof(int));
	print_array(a, sizeof(a) / sizeof(int));
	/*
	 * printf("\t=========\n");
	 * printf("size of b: %lu\n", sizeof(b) / sizeof(int));
	 * print_array(b, sizeof(b) / sizeof(int));
	 * reverse_array(b, sizeof(b) / sizeof(int));
	 * print_array(b, sizeof(b) / sizeof(int));
	 */
	return (0);
}
