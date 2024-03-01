#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: pointer to passed string
 *
 * Return: pointer to new s
 */
char *rot13(char *s)
{
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char a_rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; a[j]; j++)
			if (s[i] == a[j])
			{
				s[i] = a_rot13[j];
				break;
			}
	}

	return (s);
}
