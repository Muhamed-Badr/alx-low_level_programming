#include "main.h"

/**
 * _strlen_recursion - returns the length of a string (using recursion).
 * @s: pointer to the passed string
 *
 * Return: The length of a string pointed by s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome_wrapper - wrapper function that checks the palindrome string
 * @s: Pointer to the passed string to check
 * @start: substring start position
 * @end: substring end position
 *
 * Return: 1 if 's' is a palindrome. 0 otherwise
 */
int is_palindrome_wrapper(char *s, int start, int end)
{
	/* Base case: If start and end indices cross each other, return true */
	if (start >= end)
		return (1);

	/* If characters at start and end indices don't match, return false */
	if (s[start] != s[end])
		return (0);

	/*Recursively check the substring excluding the start and end characters*/
	return (is_palindrome_wrapper(s, start + 1, end - 1));
}

/**
 * is_palindrome - check if the 's' is palindrome.
 * @s: Pointer to the passed string to check
 *
 * note:
 *    -> The palindrome string is a string when we read it from both ends
 *       gives the same meaning. It means that when we reverse a given string,
 *       it should be the same as the original string.
 *    -> EX -
 *            "level"   -> palindrome string [✓]
 *            "ABCDCBA" -> palindrome string [✓]
 *            "test"    -> Not palindrome string [✗]
 *
 * Return: 1 if 's' is a palindrome. 0 otherwise
 */
int is_palindrome(char *s)
{
	int str_len = _strlen_recursion(s);

	return (is_palindrome_wrapper(s, 0, str_len - 1));
}
