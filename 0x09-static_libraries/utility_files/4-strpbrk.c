#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer to string to search in it
 * @accept: pointer to string to match any byte from it
 *
 * Return: pointer to the byte in 's' that matches one of the bytes in 'accept'
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
		for (j = 0; accept[j]; j++)
			if (s[i] == accept[j])
				return (s + i);

	return (NULL);
}
