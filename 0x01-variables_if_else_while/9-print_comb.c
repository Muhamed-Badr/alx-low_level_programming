#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	short int n = '0';

	while  (n < 10 + '0')
	{
		putchar(n++);
		if (n <= '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
