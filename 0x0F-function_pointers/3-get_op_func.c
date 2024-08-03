#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform
 *                the operation asked by the user.
 * @s: A pointer to `char`, holds the symbol of the asked operation.
 *
 * Return: A Pointer to a function that takes arguments (int, int),
 *          returns int.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		/* if (ops[i].op[0] == s[0]) */
		if (*ops[i].op == *s)
			return (ops[i].f);
		i++;
	}

	return (ops[i].f); /* `return (NULL);` the last element in array `ops` */
}
