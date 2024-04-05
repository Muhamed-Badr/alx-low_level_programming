#include "main.h"

/**
 * find_r_char - match the character 'ch' in 's1' from end
 * @s1: pointer to the string to search in it
 * @ch: The character to match it
 * @ptr: Pointer to substring that starts by the matching char 'ch'
 *
 * Return: pointer to the matched char in 's1'. NULL ('\0') if 'ch' not found
 */
char *find_r_char(char *s1, char ch, char *ptr)
{
	if (*s1 == ch)
		ptr = s1;

	if (*s1 != '\0') /* search in the whole string 's1'  */
		return (find_r_char(s1 + 1, ch, ptr));

	if (!ptr) /* return NULL ('\0') if there is no matching */
		return (s1);
	return (ptr); /* return 'ptr' if there is a matching found */
}

/**
 * wildcmp - compares two strings
 * @s1: pointer to the 1st string
 * @s2: pointer to the 2st string
 *
 * note:
 *   -> 's2' can contain the special character '*'
 *   -> The special char '*' can replace any string(including an empty string)
 *
 * Return: 1 if 's1' and 's2' can be considered identical. 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*') /* check if the current character '*s2' == '*' */
	{
		if (*(s2 + 1) == '*') /* skip the continuous '*' in s2 */
			return (wildcmp(s1, s2 + 1));
		/*
		 * find the character that is pointed by 's2 + 1' in 's1'
		 * then make 's1' and 's2' = the substring starts by this character
		 */
		else
			s1 = find_r_char(s1, *++s2, '\0');
	}

	if (*s1 != *s2)
		return (0);

	/* return 1 only if 's1' and 's2' reach the end without any difference */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	return (wildcmp(s1 + 1, s2 + 1));
}
