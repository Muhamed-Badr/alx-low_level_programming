#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: pointer to the string
 * @s2: pointer to the pattern
 *
 * Description: I've inspired the solution by this article
 *      www.firmcodes.com/write-c-program-wildcard-pattern-matching-algorithm/
 *
 * note:
 *   -> 's2' can contain the special character '*'
 *   -> The special char '*' can replace any string(including an empty string)
 *
 * Return: 1 if 's1' and 's2' can be considered identical. 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	/*
	 * Base case:
	 * return 1 only if 's1' and 's2' reach the end without any difference
	 * #-> both 's1' and 's2' are empty, they match [✓]
	 */
	if (*s2 == '\0' && *s1 == '\0')
		return (1);

	/* skip continuous extra '*' characters */
	if (*s2 == '*' && *(s2 + 1) == '*')
		return (wildcmp(s1, s2 + 1));

	/* Check for match */
	if (*s2 == *s1)
		return (wildcmp(s1 + 1, s2 + 1));

	/*
	 * if you want to include the '?' wildcard you can:
	 * -> replace the previous condition `if (*s2 == *s1)`
	 *    by this one `if (*s2 == '?' || *s2 == *s1)`
	 */

	/* Check for zero or more character missing */
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	/*
	 * Base case:
	 * return 0 if none of the previous conditions are met
	 * #-> 's1' and 's2' they doesn't match [✗]
	 */
	return (0);
}
