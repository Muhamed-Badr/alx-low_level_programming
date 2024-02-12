#include "main.h"

/**
 * print_sign - checks 'n' sign
 * @n: The number to check
 *
 * Return: 1 if the n is greater than zero (+).
 *         0 if the n is zero (0).
 *        -1 if the n is less than zero (-).
 */
int print_sign(int n)
{
	if (n > 0)
	{
		/* _putcahr(43); */
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		/* _putcahr(45); */
		_putchar('-');
		return (-1);
	}
	else
	{
		/* _putcahr(48); */
		_putchar('0');
		return (0);
	}
}
