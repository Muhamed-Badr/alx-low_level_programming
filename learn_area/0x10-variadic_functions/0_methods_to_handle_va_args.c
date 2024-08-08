#include <stdio.h>
#include <stdarg.h>
/* Define a calling convention for a variadic function */

int add_nums(int count, ...);
void print_n_str(char *str, ...);
void my_print(char *format, ...);

int main()
{
	printf("%d\n", add_nums(4, 25, 25, 50, 50));

	printf("%d\n", add_nums(0));

	puts("\t============");

	print_n_str("Hello, ", "Geeks :)\n", "c", "is", "fun", " ^_^", "\n", NULL);

	puts("\t============");

	/*
	 * Placeholders used with `my_print()` function:
	 *   d -> integer numbers
	 *   f -> decimal/floating numbers
	 *   c -> characters
	 *   s -> strings
	 */
	my_print("cssdsfa", 'c', "is", "fun ", 555, " ", 5.55, '\n');

	return (0);
}


/*
 * Pass the number of optional arguments as one of the fixed/required arguments
 *  This convention works provided all of the optional arguments are of
 *  the same type.
 */
int add_nums(int count, ...)
{
	int i, result = 0;
	va_list args;

	va_start(args, count);
	for (i = 0; i < count; ++i)
		result += va_arg(args, int);
	va_end(args);

	return result;
}

/*
 * Pass an “end marker” value as the last optional argument.
 *  For example, for a function that manipulates a variable number of pointer
 *  arguments, a `NULL` pointer might indicate the end of the argument list.
 *  (This assumes that a `NULL` pointer isn’t otherwise meaningful to the
 *  function.) The `execl()` function works in just this way.
 */
void print_n_str(char *str, ...)
{
	char *s;
	va_list ap;

	va_start(ap, str);
	s = str;

	while (s != NULL)
	{
		printf("%s", s);

		s = va_arg(ap, char *);
	}
	va_end(ap);
}

/*
 * Use a required argument as a pattern to specify both the number and types of
 *  the optional arguments. The format string argument to `printf()` is one
 *  example of this.
 */
void my_print(char *format, ...)
{
	char c;
	va_list list;

	va_start(list, format);

	while (*format != '\0')
	{
		c = *format++;

		if (c == 'd')
			printf("%d", va_arg(list, int));
		else if (c == 'c')
			printf("%c", va_arg(list, int));
		else if (c == 'f')
			printf("%f", va_arg(list, double));
		else if (c == 's')
			printf("%s", va_arg(list, char *));
		else
			printf("\nError: The placeholders '%c' is invalid!\n", c);
	}
	va_end(list);
}
