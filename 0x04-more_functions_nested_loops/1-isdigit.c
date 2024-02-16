#include "main.h"

/**
 * _isdigit - checks if 'c' is a digit (0 -> 9)
 * @c: The digit to check
 *
 * Return: 1 if the c is a digit. 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
