#include "main.h"

/**
 * print_buffer - prints a buffer.
 * @b: pointer to the buffer
 * @size: The number of printed buffer bytes
 *
 * Return: Nothing (void)
 */
void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size;)
	{
		/*
		 * prints the position of the first byte of the line
		 * in hexadecimal (8 chars)
		 */
		printf("%08x:", i);
		/*prints buffer content in hexadecimal (2 chars),2 bytes at a time*/
		for (j = i; j < i + 10; j++)
		{
			if (j % 2 == 0)
				printf(" ");/*separates every 2 bytes by a space*/

			if (j < size)
				printf("%02x", b[j]);
			else
				printf("  ");/*alignment last line if it is less than 10 characters*/
		}
		printf(" ");
		for (; i < j; i++)/*prints buffer content*/
		{
			if (i < size)
				/*
				 * prints the character if it is printable
				 * printable characters starts from ' ' (32) to '~' (126)
				 * -> for more information run `man ascii`
				 */
				if (b[i] >= 32 && b[i] <= 126)
					printf("%c", b[i]);
				else
					printf(".");/*prints '.' if it is not printable*/
			else
				break;/*break when 'size' bytes printed*/
		}
		printf("\n");
	}
	if (!i)/* prints new line if 'size' less than or equal 0 */
		printf("\n");
}
