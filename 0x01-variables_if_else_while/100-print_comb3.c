#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	short int n1 = 0, n2 = 0;

	while  (n1 < 10)
	{
		while (n2 < 10)
		{
			if (n2 > n1)
			{
				putchar(n1 + '0');
				putchar(n2 + '0');
				if ((n1 * 10) + n2 != 89)
				{
					putchar(',');
					putchar(' ');
				}
			}
			n2++;
		}
		n2 = 0;
		n1++;
	}

	putchar('\n');

	return (0);
}
