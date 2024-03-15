#include "main.h"

/**
 * set_string - sets the value of a pointer to a char.
 * @s: 1st argument (pointer to a char)
 * @to: 2nd argument (pointer to a char)
 *
 * Return: Nothing (void)
 */
void set_string(char **s, char *to)
{
	*s = to;
}
