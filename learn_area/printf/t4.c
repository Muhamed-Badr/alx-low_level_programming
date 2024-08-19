#include <stdio.h>

char *_itos(int num, ...);


int main(void)
{
	int n1, n2;

	n1 = 123;
	printf("n1: %5d\n", n1);

	n2 = 123456789;
	printf("n2: %5d\n", n2);

	/*
	puts("===padding=========")

	printf("n2: %5d\n", n2);

	printf("n2: %5d\n", n2);

	printf("n2: %5d\n", n2);

	printf("n2: %5d\n", n2);

	printf("n2: %5d\n", n2);
	*/



	return (0);
}

char *_itos(int num, ...)
{
	char *str;
	int i, *len_ptr;
	va_list ap;

	va_start(ap, num);
	len_ptr = va_arg(ap, int *);
	if ()


}
