#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible different combinations
 * of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	short int f_digit = 0, s_digit = 0;

	while  (f_digit < 100)
	{
		s_digit = f_digit;
		while (s_digit < 100)
		{
			if (s_digit > f_digit)
			{
				putchar((f_digit / 10) + '0');
				putchar((f_digit % 10) + '0');
				putchar (' ');
				putchar((s_digit / 10) + '0');
				putchar((s_digit % 10) + '0');
				if (f_digit != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			s_digit++;
		}
		f_digit++;
	}

	putchar('\n');

	return (0);
}
