#include "main.h"

/**
 * _isalpha - checks if 'c' is alphabetic character
 * @c: The character to check
 *
 * Return: 1 if the c is alphabetic. 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	return (0);
}
