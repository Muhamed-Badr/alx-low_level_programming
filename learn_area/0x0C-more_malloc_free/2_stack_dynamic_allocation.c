#include <alloca.h>
#include <stdio.h>
int *use_alloca(int n, int start, int end);
int *indirect_call(int n, int start, int end);
void init_arr(int *arr_4, int size);
void print_arr_content(int *arr_3, int size, int start_bytes, int end_bytes);

/**
 * main - practic on `alloca()`
 *
 * Description: `alloca()` function allocates `size` bytes of space
 *              in the stack frame of the caller.  This temporary space
 *              is automatically freed when the caller function returns.
 *
 * Note: The memory allocated by `alloca()` is automatically freed when
 *       the function that called it returns. Do not return a pointer
 *       to this memory from the function, as it will become invalid.
 *
 *    -> Observe the printed content of arrays that exist in each function
 *       (arr_0, arr_1, arr_2) you'll find that the content of `arr_0` that
 *       exists in `use_alloca()` is the only correct array content between all
 *       arrays (arr_0, arr_1, arr_2), even though the both arrays (arr_1 &
 *       arr_2) points to the address of `arr_0` and the reason behind this
 *       is because that the allocated memory for `arr_0` is freed after
 *       the function `use_alloca()` returns
 *          So:
 *       The content of (arr_1, arr_2) is undefined(garbage)
 *
 * Return: 0 (Always success).
 */
int main(void)
{
	int *arr_2, n, start, end;

	printf("How much memory you want to allocate(in Bytes): ");
	scanf("%d", &n);

	printf("enter start: ");
	scanf("%d", &start);
	printf("enter end  : ");
	scanf("%d", &end);

	/* arr_2 = use_alloca(n); */
	arr_2 = indirect_call(n, start, end);

	printf("From `main()`: ");

	print_arr_content(arr_2, n, start, end);

	return (0);
}

void init_arr(int *arr_4, int size)
{
	int i;

	for (i = 0; i < size; i++)
		arr_4[i] = i;
}

void print_arr_content(int *arr_3, int size, int start_bytes, int end_bytes)
{
	int i;

	if (start_bytes < 0)
	{
		puts("[Error]: Invalid start index! :(");
		return;
	}

	for (i = 0; i < size && i < start_bytes; i++)
		printf("%d ", arr_3[i]);
	if (i < start_bytes)
		printf("(no more elements)");

	if (end_bytes < 0 || end_bytes > size)
	{
		puts("[Error]: Invalid end index! :(");
		return;
	}

	if (end_bytes > 0)
	{
		printf("...... ");
		for (i = (size - end_bytes); i < size; i++)
			printf("%d ", arr_3[i]);
	}

	printf("\n");
}

int *use_alloca(int n, int start, int end)
{
	int *arr_0;

	/* Allocate memory on the stack for n integers */
	/* arr_0 = (int *)alloca(n * sizeof(int)); */
	arr_0 = alloca(n * sizeof(int));
	init_arr(arr_0, n);

	printf("From `use_alloca()`: ");
	print_arr_content(arr_0, n, start, end);

	/*
	 * No need to free the memory;
	 * it will be automatically cleaned up when the function returns
	 */

	return (arr_0);
}

int *indirect_call(int n, int start, int end)
{
	int *arr_1;

	arr_1 = use_alloca(n, start, end);

	printf("From `indirect_call()`: ");
	print_arr_content(arr_1, n, start, end);

	return (arr_1);
}
