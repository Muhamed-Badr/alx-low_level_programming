#include "main.h"

/*
 * --> 2nd solution <--
 *    ==============
 * it's the perfect solution but isn't from the performance
 * it takes a very very long time.
 * to understand what i say try the following simple program,
 * ======
 * int main ()
 * {
 *	unsigned long int i = 0, num = 50829599;
 *
 *	while (i++ <= num);
 *
 *	printf("%lu, ", i);
 *
 *	return 0;
 * }
 * ======
 * try to increase the num variable by 1 digit then run again, try:
 * -> num = 50829599
 * -> num = 508295991
 * -> num = 5082959911
 * -> num = 50829599111
 * -> etc...
 * Notice the time that the program takes
 * when you increase the num variable digit by 1
 */

/* ============================================================= */

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
		if (isprime(i))
		{
			while (!(num % i))
				num /= i;

			/* it's a debugging printf(); line */
			/* printf("inside 'if' and i = %lu and num = %lu\n", i, num); */
		}
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
