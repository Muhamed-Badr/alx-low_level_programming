#include "main.h"

/**
 * is_prime_wrapper - wrapper function that checks the prime numbers
 *@n: The passed integer number to check
 *@i: The iteration variable
 *
 * Return: 1 if 'n' is a prime number. 0 otherwise
 */
int is_prime_wrapper(int n, int i)
{
	if (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		else
			return (is_prime_wrapper(n, i + 1));
	}
	return (1);
}

/**
 * is_prime_number - checks the prime numbers
 * @n: The passed integer number to check
 *
 * Return: 1 if 'n' is a prime number. 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_wrapper(n, 2));
}
