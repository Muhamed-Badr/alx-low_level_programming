#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	short int n1 = 0, n2 = 0, n3 = 0;

	while  (n1 < 10)
	{
		while (n2 < 10)
		{
			while (n3 < 10)
			{
				if (n2 > n1 && n3 > n2)
				{
					putchar(n1 + '0');
					putchar(n2 + '0');
					putchar(n3 + '0');
					if ((n1 * 100) + (n2 * 10) + n3 != 789)
					{
						putchar(',');
						putchar(' ');
					}
				}
				n3++;
			}
			n3 = 0;
			n2++;
		}
		n2 = 0;
		n1++;
	}

	putchar('\n');

	return (0);
}
