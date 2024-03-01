#include "main.h"

/**
 * num_sign - checks number sign
 * @x: The passed integer
 *
 * Return: 0 if x positive. 1 otherwise
 */
short int num_sign(int x)
{
	if (x < 0)
		return (1);
	return (0);
}

/**
 * num_digit - calculate the digit number of num.
 * @num: The passed integer
 *
 * Return: digit number of num
 */
short int num_digit(int num)
{
	short int digit = 0;

	while (num)
	{
		digit++;
		num /= 10;
	}
	return (digit);
}

/**
 * print_number - prints an integer.
 * @n: The passed integer
 *
 * Return: Nothing (void)
 */
void print_number(int n)
{
	int digit = num_digit(n);
	short int mul_of_10 = 1;
	unsigned int unsigned_n = n;

	if (num_sign(n))
	{
		unsigned_n *= (-1);
		_putchar('-');
	}

	while (digit-- > 1)
		mul_of_10 *= 10;

	while (mul_of_10 != 1)
	{
		_putchar((unsigned_n / mul_of_10) + '0');
		unsigned_n %= mul_of_10;
		mul_of_10 /= 10;
	}
	_putchar(unsigned_n + '0');
}
