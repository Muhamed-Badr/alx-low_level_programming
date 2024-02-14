#include "main.h"

/**
 * print_times_table -  prints the n times table, starting with 0
 * @n: The passed integer number
 */
void print_times_table(int n)
{
	short int n1 = 0, n2 = 0, res;

	if (n > 15 || n < 0)
		return;
	while (n1 <= n)
	{
	while (n2 <= n)
	{
		res = n1 * n2;
		if (res < 10)
		{
			/*handel 1 digit number*/
			if (n2 != 0)
			{
				_putchar(','), _putchar(' ');
				_putchar(' '), _putchar(' ');
			}
			_putchar(res + '0');
		}
		else if (res < 100)
		{
			/*handel 2 digit number*/
			if (n2 != 0)
				_putchar(','), _putchar(' '), _putchar(' ');
			_putchar(res / 10 + '0');
			_putchar(res % 10 + '0');
		}
		else
		{
			/*handel 3 digit number*/
			if (n2 != 0)
				_putchar(','), _putchar(' ');
			_putchar(res / 100 + '0');
			_putchar((res % 100) / 10 + '0');
			_putchar((res % 100) % 10 + '0');
		}
		n2++;
	}
	_putchar('\n'), n2 = 0, n1++;
	}
}
