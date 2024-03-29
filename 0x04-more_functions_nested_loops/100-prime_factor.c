#include "main.h"

/**
 * largest_prime_factor - finds the largest prime factor of the number num
 * @num: The passed number
 *
 * Return: The largest prime factor of num
 */

unsigned long int largest_prime_factor(unsigned long int num)
{
	unsigned long int i;

	for (i = 2; num != 1; i++)
		while (!(num % i))
			num /= i;

	return (--i);
}

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("%lu\n", largest_prime_factor(612852475143));

	return (0);
}
