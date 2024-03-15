#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: pointer to string to search in it
 * @needle: pointer to substring to match it
 *
 * Return: pointer to the beginning of the located substring,
 *         NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		/*
		 *-> why (haystack[i + j] == needle[j])...?
		 * to ensure that the string in 'needle' matched with
		 * the substring in 'haystack' in the same order
		 *-> Ex:-
		 * let: haystack = "hello, wrold", needle = "lo"
		 * i = 0, j = 0;
		 * haystack[0 + 0] == needle[0] -> (h == l) -> no
		 *
		 * i = 1, j = 0;
		 * haystack[1 + 0] == needle[0] -> (e == l) -> no
		 *
		 * i = 2, j = 0;
		 * haystack[2 + 0] == needle[0] -> (l == l) -> yes
		 * i = 2, j = 1;
		 * haystack[2 + 1] == needle[1] -> (l == o) -> no
		 *
		 * i = 3, j = 0;
		 * haystack[3 + 0] == needle[0] -> (l == l) -> yes
		 * i = 3, j = 1;
		 * haystack[3 + 1] == needle[0] -> (o == o) -> yes
		 * i = 3, j = 2;
		 * end of string 'needle' (needle[2] = '\0')
		 * so all bytes in 'needle' matched with substring in 'haystack'
		 * in the same order
		 *
		 */
		for (j = 0; haystack[i + j] == needle[j] && needle[j]; j++)
			;
		if (needle[j] == '\0')
			return (haystack + i);
	}

	return (NULL);
}
