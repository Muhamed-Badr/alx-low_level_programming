#include "main.h"

/**
 * print_last_digit - prints the positive last digit of a number n
 * @n: The passed integer number
 *
 * Return: positive last digit of n
 */
int print_last_digit(int n)
{
	if (n < 0)
		n *= (-1);

	n %= 10;
	_putchar(n + '0');
	return (n);
}
