#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all digit numbers of base 10 as characters
 * using data type 'int' & function 'putchar()'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	short int n = 48;

	while  (n < 58)
		putchar(n++);

	putchar('\n');

	return (0);
}
