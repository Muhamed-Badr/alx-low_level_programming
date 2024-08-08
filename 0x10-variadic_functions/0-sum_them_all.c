#include "variadic_functions.h"

/**
 * sum_them_all - Adds all its parameters (optional ones '...').
 * @n: The number of optional integer parameters passed to be added.
 *
 * Return: The sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list ap;

	/* Initialize the argument list from the start */
	va_start(ap, n);

	/* Iterate through all parameter values */
	for (i = 0; i < n; i++)
		/* Get the next parameter value and add it to `sum` */
		sum += va_arg(ap, int);
	/* Clean up */
	va_end(ap);

	return (sum);
}
