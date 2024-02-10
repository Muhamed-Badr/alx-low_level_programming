#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabet characters in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while  (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
