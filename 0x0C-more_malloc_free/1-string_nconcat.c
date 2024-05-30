#include "main.h"
unsigned int _strlen(char *s);

/**
 * string_nconcat - concatenates two strings.
 * @s1: pointer to the 1st string
 * @s2: pointer to the 2nd string
 * @n: number of concatenated bytes from `s2`
 *
 * Description: return a pointer to a newly allocated space in memory,
 *              which contains `s1`, followed by the first `n` bytes of `s2`,
 *              and null terminated('\0')
 *
 * Return: On success, pointer to the concatenated string
 *         On failure, NULL('\0')
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, s1_len, s2_len;
	char *concat_str;

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);

	/* ensure that we will not allocate extra bytes of memory */
	if(n < s2_len)
		s2_len = n;

	concat_str = malloc((s1_len + s2_len + 1) * sizeof(*concat_str));
	if(concat_str == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		concat_str[i] = s1[i];

	for (i = 0; /* i < n && */i < s2_len; i++)
		concat_str[i + s1_len] = s2[i];
	concat_str[i + s1_len] = '\0';

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

	if (s == NULL)
		return (0);

	while (s[len] != '\0')
		len++;

	return (len);
}
