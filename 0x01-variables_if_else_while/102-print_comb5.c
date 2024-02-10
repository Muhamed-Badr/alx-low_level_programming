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
	short int n1 = 0, n2 = 0, n3 = 0, n4 = 0;

	while  (n1 < 10)
	{
		while (n2 < 10)
		{
			while (n3 < 10)
			{
				while (n4 < 10)
				{
					if ((n3 * 10) + n4 > (n1 * 10) + n2)
					{
						putchar(n1 + '0');
						putchar(n2 + '0');
						putchar (' ');
						putchar(n3 + '0');
						putchar(n4 + '0');
						if ((n1 * 1000) + (n2 * 100) + (n3 * 10) + n4 != 9899)
						{
							putchar(',');
							putchar(' ');
						}
					}
					n4++;
				}
				n4 = 0;
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
