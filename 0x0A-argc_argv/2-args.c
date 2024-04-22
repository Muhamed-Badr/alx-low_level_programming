#include <stdio.h>

/**
 * main - entry point
 * @argc: Holds the number of passed CLI arguments
 * @argv: Array of pointers contains the program passed CLI arguments
 *
 * Description: This program prints all arguments it receives
 *				including the first one, each argument per line.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
