#include "variadic_functions.h"

/**
 * print_all - Prints anything.
 * @format: The format that the optional parameters passed
 *           should follow when printing.
 *
 * Return: Nothing (void).
 */
void print_all(const char * const format, ...)
{
	unsigned int i;
	char *str, c, flag;
	va_list ap;

	va_start(ap, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		flag = 0;
		c = format[i];
		switch (c)
		{
			case 'c':
				printf("%c", va_arg(ap, int)), flag = 1;
				break;
			case 'i':
				printf("%d", va_arg(ap, int)), flag = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double)), flag = 1;
				break;
			case 's':
				str = va_arg(ap, char *), flag = 1;
				if (str != NULL)
				{
					printf("%s", str);
					break;
				}
				printf("(nil)");
				break;
		} i++;
		if (format[i] != '\0' && flag != 0)
			printf(", ");
	}
	printf("\n");
	va_end(ap);
}
