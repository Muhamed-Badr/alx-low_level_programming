#include "3-calc.h"

/**
 * main - entry point
 * @argc: argument counter
 * @argv: argument vector
 *
 * Description: This is a program that takes 4 arguments where 2 are int
 *               variables plus an operator symbol, and perform a basic
 *               arithmetic operations between two integers based on
 *               user input.
 *
 *              Usage: ./calc num1 operator num2
 *                         |     |       |     |_ argv[3]
 *                         |     |       |_ argv[2]
 *                         |     |_ argv[1]
 *                         |_ argv[0]
 *
 * Return: 0-on success
 */
int main(int argc, char **argv)
{
	int (*f)(int, int);
	char *op;
	int num1, num2;

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	/* Get equation parameters {Operands(`num1`, `num2`), Operator(`op`)}. */
	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	/* Get the correct function based on user input operation `op` */
	f = get_op_func(op);

	/*
	 * Print "Error" if the user inputs an invalid operator, doesn't match
	 *  any one of these operators {"+", "-", "*", "/", "%"}
	 */
	if (f == NULL || op[1] != '\0')
	{
		puts("Error");
		exit(99);
	}

	/* Print "Error" if the user tries to divide (`/` or `%`) by `0` */
	if ((*op == '/' || *op == '%') && num2 == 0)
	{
		puts("Error");
		exit(100);
	}

	/* printf("%d\n", get_op_func(op)(num1, num2)); */
	printf("%d\n", f(num1, num2));

	return (0);
}
