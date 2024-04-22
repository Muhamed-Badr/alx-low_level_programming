#include <stdio.h>
int _to_int(char *s, int *num);

/**
 * main - entry point
 * @argc: Holds the number of passed CLI arguments
 * @argv: Array of pointers contains the program passed CLI arguments
 *
 * Description: This program prints the result of multiplying two numbers
 *					passed to the program, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	_to_int(argv[1], &num1);
	_to_int(argv[2], &num2);

	/*
	 * These 2 lines are for debugging,
	 *	and show how the function `_to_int()` works
	 */

	/*
	 * printf("return of num1: %d\n", _to_int(argv[1], &num1));
	 * printf("return of num2: %d\n", _to_int(argv[2], &num2));
	 */

	printf("%d\n", (num1 * num2));

	return (0);
}

/**
 * _to_int - convert numbers from type char to type int
 * @s: pointer to the passed char number
 * @num: pointer to the converted number
 *
 * Return: 0 on success, 1 otherwise
 */
int _to_int(char *s, int *num)
{
	int sign = 1; /* Assume that the number is positive */

	*num = 0;

	/* Check for sign character at the beginning */
	if (*s == '-')
	{
		sign = -1;
		s++;
	}

	while (*s != '\0')
	{
		/* Check for digit characters */
		if (*s >= '0' && *s <= '9')
			*num = (*num * 10) + (*s - '0');
		else
			return (1);

		s++;
	}

	*num *= sign;

	return (0);
}
