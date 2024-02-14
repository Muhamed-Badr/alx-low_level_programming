#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: prints the sum of the even-valued terms
 * in the Fibonacci sequence whose values don't exceed 4,000,000
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	unsigned int cur_fibo = 0, before_cur_fibo = 1,
		     before_before_cur_fibo = 0, sum = 0;

	while (cur_fibo < 4000000)
	{
		cur_fibo = before_cur_fibo + before_before_cur_fibo;
		before_before_cur_fibo = before_cur_fibo;
		before_cur_fibo = cur_fibo;

		if (cur_fibo % 2 == 0)
			sum += cur_fibo;
	}
	printf("%u\n", sum);

	return (0);
}
