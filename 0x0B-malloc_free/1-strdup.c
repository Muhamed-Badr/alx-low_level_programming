#include "main.h"
unsigned int _strlen(char *s);

/**
 * _strdup - duplicate the string pointed by `str` in a new memory space
 * @str: pointer to the passed string
 *
 * Return: On success, pointer to the duplicated string
 *         On failure OR if `str == NULL`, NULL('\0')
 */
char *_strdup(char *str)
{
	char *dup_str;
	unsigned int str_len, i;

	if (str == NULL)
		return (NULL);

	str_len = _strlen(str);

	/*
	 * why `malloc(sizeof(*dup_str) * (str_len + 1))`?
	 *  remember the terminating null('\0') of the string ^_-
	 */
	dup_str = malloc(sizeof(*dup_str) * (str_len + 1));

	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i < str_len; i++)
		dup_str[i] = str[i];
	dup_str[i] = '\0';/* set the null terminated('\0') at the end of string */

	return (dup_str);
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
