#include <stdio.h>
int _to_int(char *s, int *num);

/**
 * main - entry point
 * @argc: Holds the number of passed CLI arguments
 * @argv: Array of pointers contains the program passed CLI arguments
 *
 * Description: This program prints minimum number of coins to make change
 *				for an amount of money.
 *
 * Return: 0 on success
 *         1 if the number of arguments passed != 1
 */
int main(int argc, char *argv[])
{
	int i, amount_of_money, num_of_coins = 0;
	int cent_values[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	_to_int(argv[1], &amount_of_money);

	for (i = 0; amount_of_money > 0; i++)
	{
		num_of_coins += amount_of_money / cent_values[i];
		amount_of_money %= cent_values[i];
	}

	printf("%d\n", num_of_coins);

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
