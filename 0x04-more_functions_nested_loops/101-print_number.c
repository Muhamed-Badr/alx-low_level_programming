#include "main.h"

/**
 * number_sign - check the sign of x
 * @x: The passed integer to check
 *
 * Return: 1 (TRUE) if x is positive. 0 (FALSE) otherwise
 */
short int number_sign(int x)
{
	if (x < 0)
		return (0);

	return (1);
}

/**
 * number_digit - calculate the digit number of num
 * @num: The passed integer number
 *
 * Return: The digit number of num
 */
short int number_digit(int num)
{
	short int digit_number = 0;

	while (num / 10)
	{
		digit_number++;
		num /= 10;
	}

	return (++digit_number);
}

/**
 * print_number - prints an integer number
 * @n: The passed integer to print
 */
void print_number(int n)
{
	short int i, digit = number_digit(n);
	int mul_of_10 = 10;
	unsigned int unsigned_n = n;

	if (!number_sign(n))
	{
		unsigned_n *= (-1);
		_putchar('-');
	}

	for (i = 2; i < digit; i++)
		mul_of_10 *= 10;

	for (i = 1; i < digit; i++)
	{
		_putchar((unsigned_n / mul_of_10) + '0');
		unsigned_n %= mul_of_10;
		mul_of_10 /= 10;
	}

	_putchar(unsigned_n + '0');
}
