#include <stdio.h>

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
	int a[5];
	int *p;
	int *p2;

	*a = 98;
	*(a + 1) = 198;
	*(a + 2) = 298;
	a[3] = 398;
	*(a + 4) = 498;
	printf("\tcontent of array\n");
	printf("\t----------------\n");
	printf("*a: %d\n", *a);
	printf("*(a + 1): %d\n", *(a + 1));
	printf("*(a + 2): %d\n", *(a + 2));
	printf("a[3]: %d\n", a[3]);
	printf("*(a + 4): %d\n", *(a + 4));

	printf("=====================================\n");
	printf("\taddress of array elements\n");
	printf("\t-------------------------\n");
	printf("a: %p\n", a);
	printf("(a + 1): %p\n", (a + 1));
	printf("(a + 2): %p\n", (a + 2));
	printf("&a[3]: %p\n", &a[3]);
	printf("(a + 4): %p\n", (a + 4));

	printf("=====================================\n");
	printf("\tpointers\n");
	printf("\t--------\n");
	p = a + 1;
	printf("p = a + 1;\np: %p\n", p);
	printf("*p: %d\n*p = 98;\n", *p);
	*p = 98;  
	printf("*p: %d\n*(a + 1): %d\na[1]: %d\n", *p, *(a + 1), a[1]);
	p2 = &a[3];
	printf("p2 = &a[3];\np2: %p\n", p2);
	printf("*p2: %d\n*p2 = *p + 1337;\n", *p2);
	*p2 = *p + 1337;
	printf("*p2: %d\n*(a + 3): %d\na[3]: %d\n", *p2, *(a + 3), a[3]);

	return (0);
}
