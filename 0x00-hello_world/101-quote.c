#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using function 'write()' to print array of char content
 * ssize_t write(int fd, const void *buf, size_t count);
 *
 * Return: For one time let's make it return 1 (Fail)
 */
int main(void)
{
	char arr[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, arr, 59);
	return (1);
}
