#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer to string to search in it
 * @accept: pointer to string to match bytes from it
 *
 * Return: number of bytes in the initial segment of 's'
 *         which consist only of bytes from 'accept'
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
		for (j = 0; s[i] != accept[j]; j++)
			if (accept[j] == '\0')
				return (i);

	return (i);
}
/*
 * 2nd sol
 *
 * unsigned int _strspn(char *s, char *accept)
 * {
 *     unsigned int i, j;
 *     char is_not_match_flag;
 *
 *     for (i = 0; s[i]; i++)
 *     {
 *         is_not_match_flag = '\1';
 *         for (j = 0; accept[j]; j++)
 *         {
 *             if (s[i] == accept[j])
 *             {
 *                 is_not_match_flag = '\0';//turn off flag when a match found
 *                 break;
 *             }
 *         }
 *         if (is_not_match_flag)//exit when no match is found
 *             break;
 *     }
 *
 *     return (i);
 * }
 */
