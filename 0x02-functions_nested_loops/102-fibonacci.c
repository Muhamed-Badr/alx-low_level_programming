#include "main.h"

/**
 * main - entry point
 *
 * Description: prints the first 50 Fibonacci numbers,
 * starting with 1 and 2
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	short int count = 0;
	unsigned long cur_fibo = 0, before_cur_fibo = 1, before_before_cur_fibo = 0;

	while (count < 50)
	{
		cur_fibo = before_cur_fibo + before_before_cur_fibo;
		before_before_cur_fibo = before_cur_fibo;
		before_cur_fibo = cur_fibo;

		if (count++ != 0)
			printf(", ");

		printf("%lu", cur_fibo);
	}
	printf("\n");

	return (0);
}
