#include "function_pointers.h"

/**
 * print_name - Prints a name using callback function.
 * @name: A pointer that holds the name to be printed.
 * @f: A pointer to a function that takes an argument (char *), returns void.
 *
 * Return: Nothing (void).
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		/* (*f)(name); */
		f(name);
}
