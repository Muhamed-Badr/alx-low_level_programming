#include "main.h"

/**
 * leet - encodes a string into leet (1337).
 * @s: pointer to passed string
 *
 * Return: pointer to new s
 */
char *leet(char *s)
{
	char a[] = "aeotlAEOTL", b[] = "4307143071";
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; a[j]; j++)
			if (s[i] == a[j])
			{
				s[i] = b[j];
				break;
			}
	}

	return (s);
}
