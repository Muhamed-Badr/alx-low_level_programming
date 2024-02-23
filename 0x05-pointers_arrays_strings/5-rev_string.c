#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the passed string
 *
 * Return: Nothing (void)
 */
void rev_string(char *s)
{
	int i, j;
	char ch;

	/*finds the length of string without null character*/
	for (j = 0; s[j]; j++)
		;

	for (i = 0; i < --j; i++)
	{
		ch = s[i];
		s[i] = s[j];
		s[j] = ch;
	}

}
