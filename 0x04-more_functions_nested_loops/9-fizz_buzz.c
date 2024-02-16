#include "main.h"

/**
 * main - entry point
 *
 * Description: prints the numbers from 1 to 100, followed by a new line.
 * But instead of the number:
 *	- print 'Fizz' if number multiples of 3
 *	- print 'Buzz' if number multiples of 5
 *	- print 'FizzBuzz' if number multiples of 3 and 5
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
	}

	printf("\n");

	return (0);
}
