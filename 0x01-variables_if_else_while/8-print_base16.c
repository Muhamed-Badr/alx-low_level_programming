#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all digit numbers of base 16
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = '0';

	while  (c <= '9' || c <= 'f')
	{
		putchar(c++);
		c - 48 == 10 ? c = 'a' : c;
	}
	putchar('\n');

	return (0);
}
