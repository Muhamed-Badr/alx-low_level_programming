#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: pointer to passed string
 *
 * Return: pointer to new 's'
 */
char *cap_string(char *s)
{
	char separators[] = " \t\n,;.!?\"(){}\0";
	int i = 0, j = 0;

	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] -= 32;

	for (i = 1; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			for (j = 0; separators[j]; j++)
				if (s[i - 1] == separators[j])
				{
					s[i] -= 32;
					break;
				}
		}
	}

	return (s);
}
