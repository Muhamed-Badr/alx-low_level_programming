#include "main.h"
unsigned int _strlen(char *s);

/**
 * str_concat - concatenates two strings in a new memory space.
 * @s1: pointer to the 1st passed string
 * @s2: pointer to the 2nd passed string
 *
 * Return: On success, pointer to the concatenated string
 *         On failure, NULL('\0')
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	unsigned int s1_len, s2_len, i;

	if (s1 == NULL && s2 == NULL)
	{
		s1_len = 0;
		s2_len = 0;
	}
	else if (s1 == NULL)
	{
		s2_len = _strlen(s2);
		s1_len = 0;
	}
	else if (s2 == NULL)
	{
		s1_len = _strlen(s1);
		s2_len = 0;
	}
	else
	{
		s1_len = _strlen(s1);
		s2_len = _strlen(s2);
	}

	/*
	 * why `malloc(sizeof(*concat_str) * (s1_len + s2_len + 1))`?
	 *  remember the terminating null('\0') of the string ^_-
	 */
	concat_str = malloc(sizeof(*concat_str) * (s1_len + s2_len + 1));
	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		concat_str[i] = s1[i];

	/*
	 * why `concat_str[s1_len + i] = s2[i];`?
	 *  simply start from where others end:
	 *   we need to concat the contents of s1, followed by the contents of s2
	 */
	for (i = 0; i < s2_len; i++)
		concat_str[s1_len + i] = s2[i];

	/* set the null terminated('\0') at the end of string */
	concat_str[s1_len + i] = '\0';

	return (concat_str);
}

/**
 * _strlen - calculate the length of string `s`
 * @s: pointer to the passed string
 *
 * Return: passed string length
 */
unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
