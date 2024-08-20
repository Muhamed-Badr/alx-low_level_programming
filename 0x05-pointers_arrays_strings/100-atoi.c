#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: pointer to passed string
 *
 * Return: The converted integer.
 *         0 if there is no integer in passed string.
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int int_num = 0;

	do {
		if (*s == '-')
			sign *= (-1);
		else if (*s >= '0' && *s <= '9')
			int_num = (int_num * 10) + (*s - '0');
		else if (int_num > 0)
			break;
	} while (*s++);

	return (sign * int_num);

	/*
	 *	2nd sol (not good for performance)
	 *
	 *	int num_len, num_start, sign = 1;
	 *	unsigned int int_num = 0;
	 *
	 *	for (num_len = 0, num_start = 0; s[num_start]; num_start++)
	 *	{
	 *		while (s[num_start] >= '0' && s[num_start] <= '9')
	 *		{
	 *			num_len++;
	 *			num_start++;
	 *		}
	 *
	 *		if (s[num_start] == '-')
	 *			sign *= (-1);
	 *
	 *		if (num_len)
	 *			break;
	 *	}
	 *
	 *	for (num_start -= num_len; num_len--; num_start++)
	 *		int_num = (int_num * 10) + (s[num_start] - '0');
	 *
	 *	return (sign * int_num);
	 */
}
