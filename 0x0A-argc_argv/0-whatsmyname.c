#include <stdio.h>

/**
 * main - entry point
 * @argc: Holds the number of passed CLI arguments
 * @argv: Array of pointers contains the program passed CLI arguments
 *
 * Description: This program prints its name, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argc; /* To ignore the compiler warning for unused variables */

	printf("%s\n", argv[0]);

	return (0);
}
