#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabet characters in lowercase
 * except letters 'q' and 'e'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while  (c <= 'z')
	{
		if (c != 'e' && c != 'q')
			putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
