#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: pointer to passed string
 *
 * Return: pointer to new 's'
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			/*
			 * -> The difference between lowercase & uppercase characters:
			 * -> ('a' - 'A') = 32
			 */
			s[i] -= ('a' - 'A');
		}

	return (s);
}
