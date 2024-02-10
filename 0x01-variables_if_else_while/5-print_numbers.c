#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all digit numbers of base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = '0';

	while  (c - 48 < 10)
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
