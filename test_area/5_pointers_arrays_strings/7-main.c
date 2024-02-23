#include <stdio.h>

/**
 * modif_my_param - set the integer to 402
 * @m: a pointer the integer we want to set to 402
 *
 * Return: nothing
 */
void modif_my_param(int *m)
{
	int a;

	printf("=========================================\n");
	printf("\tfrom inside 'modif_my_param'\n");
	printf("\t----------------------------\n");
	printf("Value of 'm': %p\n", m);
	printf("Address of 'm': %p\n", &m);
	printf("Address of 'a': %p\n", &a);
	*m = 402;
}

/**
 * main - how to change the value of a variable from outside the function
 * it is declared in, using a pointer.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int *p;

	p = &n;
	n = 98;
	printf("Value of 'n' before the call: %d\n", n);
	printf("Address of 'n': %p\n", &n);
	printf("Value of 'p': %p\n", p);
	printf("Address of 'p': %p\n", &p);
	modif_my_param(p);
	printf("Value of 'n' after the call: %d\n", n);
	return (0);
}
