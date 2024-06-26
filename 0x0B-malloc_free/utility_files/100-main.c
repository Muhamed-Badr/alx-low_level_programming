#include "../main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
	char *s;

	/* s = argstostr(0, NULL); */
	s = argstostr(ac, av);
	if (s == NULL)
	{
		puts("NULL returned");
		return (1);
	}
	printf("%s", s);
	free(s);
	return (0);
}
