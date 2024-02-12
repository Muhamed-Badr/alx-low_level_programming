#include "main.h"

/**
 * times_table -  prints the 9 times table, starting with 0
 */
void times_table(void)
{
	short int n1 = 0, n2 = 0, res;

	while (n1 < 10)
	{
		while (n2 < 10)
		{
			res = n1 * n2;
			if (res < 10)
			{
				if (n2 != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(res + '0');
			}
			else
			{
				if (n2 != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar(res / 10 + '0');
				_putchar(res % 10 + '0');
			}
			n2++;
		}
		_putchar('\n');
		n2 = 0;
		n1++;
	}
}
