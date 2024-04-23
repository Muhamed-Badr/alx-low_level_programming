#include <stdio.h>
int _to_int(char *s, int *num);

/**
 * main - entry point
 * @argc: Holds the number of passed CLI arguments
 * @argv: Array of pointers contains the program passed CLI arguments
 *
 * Description: This program prints the result of adding positive numbers
 *					passed to the program, followed by a new line.
 *
 * Return: 0 if the passed arguments(numbers) are valid, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i, num, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (_to_int(argv[i], &num) == 0)
			sum += num;
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);

	return (0);
}

/**
 * _to_int - convert numbers from type char to type int
 * @s: pointer to the passed char number
 * @num: pointer to the converted number
 *
 * Return: 0 if the passed number is valid, 1 otherwise
 */
int _to_int(char *s, int *num)
{
	int sign = 1; /* Assume that the number is positive */

	*num = 0; /* Initialize `num` to 0 (reset its value to the default) */

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
