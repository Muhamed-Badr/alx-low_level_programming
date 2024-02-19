#include "main.h"

/**
 * isprime - check if n is prime
 * @n: The passed number
 *
 * Return: 1 (TRUE) if n is prime. 0 (FALSE) otherwise
 */
short int isprime(unsigned long int n)
{
	unsigned long int i;

	for (i = 2; (i * i) <= n; i++)
		if (n % i == 0)
			return (0);

	if (n == 0 || n == 1)
		return (0);
	return (1);
}

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
	{
		if(isprime(i))
			while (!(num % i))
				num /= i;
	}

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
