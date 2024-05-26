#include <stdio.h>

int main(void)
{
	int n = 98;
	int *p = &n;

	void *ptr = &n;

	printf("n: %d\n&n: %p\np: %p\n*p: %d\n", n, &n, p, *p);

	(*p)++;

	printf("==============\n(*p)++;\nn: %d\n&n: %p\np: %p\n*p: %d\n", n, &n, p, *p);
	
	*p++;

	printf("==============\n*p++;\nn: %d\n&n: %p\np: %p\n*p: %d\n", n, &n, p, *p);

	printf("==============\nvoid ptr = &n;\nn: %d\n&n: %p\nptr: %p\n*ptr: %d\n", n, &n, ptr, *(int *)ptr);
	
	return (0);
}
