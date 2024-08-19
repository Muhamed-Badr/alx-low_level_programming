#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int i, n, limit_n;

	limit_n = 2048;

	if (argc != 2)
	{
		printf("Usage: %s [number < %d]\n", argv[0], limit_n);
		return (1);
	}

	n = atoi(argv[1]);

	/*
	if (n > limit_n)
		n = limit_n;
*/
	for (i = 0; i < n; i++)
		printf("*");

	return (0);
}
