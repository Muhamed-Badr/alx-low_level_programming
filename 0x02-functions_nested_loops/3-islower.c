#include "main.h"

/**
 * _islower - checks if 'c' is lowercase character
 * @c: The character to check
 * 
 * Return: 1 if the c is lowercase. 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	return (0);
}
