#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument counter
 * @argv: argument vector
 *
 * Description: A program that prints the opcodes
 *               of its own main function.
 *
 *              Usage: ./main number_of_bytes
 *
 *  Return: 0-on success
 */
int main(int argc, char **argv)
{
	/* Cast the main function to a char pointer to access raw bytes */
	char *ptr_to_main = (char *) main;
	int i, num_of_bytes;

	if (argc != 2)
	{
		puts("Error");
		exit(1);
	}

	num_of_bytes = atoi(argv[1]);
	if (num_of_bytes < 0)
	{
		puts("Error");
		exit(2);
	}

	for (i = 0; i < num_of_bytes; i++)
	{
		printf("%02x", (unsigned char)ptr_to_main[i]);    /* Method 1 */
		/* printf("%02x", *(ptr_to_main + i) & 0xFF);  */ /* Method 2 */
		/* printf("%02x", *(ptr_to_main + i));         */ /* Method 3 */

		/*
		 * Notes:
		 *    1. `ptr_to_main[i]` is equivalent to `*(ptr_to_main + i)`
		 *    2. Don't use method 3 because the printed byte may hold a
		 *        negative value, and the printed format will be incorrect.
		 */

		/* Format the output */
		if (i != (num_of_bytes - 1))
			printf(" ");
	}
	printf("\n");

	return (0);
}
