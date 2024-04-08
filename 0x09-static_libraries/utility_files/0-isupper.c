#include "main.h"

/**
 * _isupper - checks if 'c' is uppercase character
 * @c: The character to check
 *
 * Return: 1 if the c is uppercase. 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
