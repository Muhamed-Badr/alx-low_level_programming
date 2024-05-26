#include <stdio.h>

/**
 * main - addresses of variables
 *
 * Return: Always 0.
 */
int main(void)
{
	char c, c1;
	int n;
	char *c_ptr = &c, *c1_ptr = &c1;
	int *n_ptr = &n;

	printf("address of c: %p\n", &c);
	printf("address of c by c_ptr: %p\n", c_ptr);
	printf("address of c by &c_ptr: %p\n", &c_ptr);
	printf("address of c by (void *)c_ptr: %p\n", (void *)c_ptr);
	printf("address of n: %p\n", &n);
	printf("address of n by n_ptr: %p\n", n_ptr);
	printf("address of n by &n_ptr: %p\n", &n_ptr);
	printf("address of n by (void *)n_ptr: %p\n", (void *)n_ptr);
	printf("===================================================\n");
	printf("the size of c_ptr: %lu\n", sizeof(c_ptr));
	printf("the size of n_ptr: %lu\n", sizeof(n_ptr));
	printf("size of 'c': %lu\n", sizeof(c));
	printf("size of '&c': %lu\n", sizeof(&c));
	printf("size of 'n': %lu\n", sizeof(n));
	printf("size of '&n': %lu\n", sizeof(&n));
	printf("===================================================\n");
	//printf("c_ptr + c1_ptr: %p\n", (c_ptr + c1_ptr));

	return (0);
}
