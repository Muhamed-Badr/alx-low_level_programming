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
				flag = 1;
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				flag = 1;
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				flag = 1;
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				flag = 1;
				str = va_arg(ap, char *);
				if (str != NULL)
				{
					printf("%s", str);
					break;
				}
				printf("(nil)");
				break;
		}
		i++;
		if (format[i] != '\0' && flag != 0)
			printf(", ");
	}
	printf("\n");
}
