#include "../main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "hello, world";
	char *f = "oleh";
	unsigned int n;

	n = _strspn(s, f);
	printf("%u\n", n);

	/*
	f = "olh";
	n = _strspn(s, f);
	printf("%u\n", n);

	f = "ole";
	n = _strspn(s, f);
	printf("%u\n", n);

	f = "oeh";
	n = _strspn(s, f);
	printf("%u\n", n);
	*/

	return (0);
}
