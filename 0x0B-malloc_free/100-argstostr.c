#include "main.h"
unsigned int _strlen(char *s);

/**
 * argstostr - concatenates all the arguments passed to the program
 *             and separates each argument by '\n' in the new string.
 * @ac: The number of arguments passed to the program
 * @av: Array of pointers contains the passed arguments
 *
 * Description: if i run program with some arguments such as
 *      `./program I will "show you" how great I am`
 *      the new string should be like:
 *      `concat_str = "./program\nI\nwill\nshow you\nhow\ngreat\nI\nam\n"`
 *
 * Return: On success, pointer to the new concatenated string
 *         On failure OR if `ac == 0 || av == NULL`, NULL('\0')
 */
char *argstostr(int ac, char **av)
{
	char *concat_str;
	int i, j, pos = 0, str_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	/*
	 * calculate the new string length
	 *   by sum/adding each argument length to `str_len`
	 */
	for (i = 0; i < ac; i++)
		str_len += _strlen(av[i]);
	/*
	 * after sum the length of all '\n' that will be added after each argument
	 *   so `str_len += ac;`
	 * then we need to add 1 to `str_len` to include the termenation null('\0')
	 *   so `str_len += (ac + 1)`
	 */
	str_len += (ac + 1);

	concat_str = malloc(sizeof(*concat_str) * str_len);
	if (concat_str == NULL)
		return (NULL);

	/* concat all arguments in one new string */
	for (i = 0; i < ac; i++)
	{
		/* concat each argument characters */
		for (j = 0; av[i][j] != '\0'; j++)
			concat_str[pos++] = av[i][j];
		concat_str[pos++] = '\n'; /* put '\n' after each argument */
	}
	concat_str[pos] = '\0'; /* put the termination null('\0') at the end */

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
