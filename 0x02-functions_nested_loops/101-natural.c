#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: computes and prints the sum of
 * all the multiples of 3 or 5 below 1024 (excluded)
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	short int n = -1;
	int sum = 0;

	while (++n < 1024)
		if (n % 3 == 0 || n % 5 == 0)
			sum += n;

	printf("%d\n", sum);

	return (0);
}
