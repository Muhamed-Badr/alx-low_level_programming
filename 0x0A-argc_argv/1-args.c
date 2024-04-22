#include <stdio.h>

/**
 * main - entry point
 * @argc: Holds the number of passed CLI arguments
 * @argv: Array of pointers contains the program passed CLI arguments
 *
 * Description: This program prints the number of arguments passed into it,
 *					followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] /* __attribute__((unused)) */)
{
	(void)argv; /* To ignore the compiler warning for unused variables */

	printf("%d\n", (argc - 1));

	return (0);
}
