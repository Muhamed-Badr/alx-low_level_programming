#include <stdio.h>

/**
 * modif_my_char_var - Solve me
 *
 * Return: nothing.
 */
void modif_my_char_var(char *cc, char ccc)
{

	printf("==========================================\n");
	printf("\tinside 'modif_my_char_var'\n");
	printf("\t--------------------------\n");
	printf("address of 'cc': %p\n", &cc);
	printf("value of 'cc': %p\n", cc);
	printf("value of address that holded by 'cc': %c\n", *cc);
	printf("value of 'ccc': %c\n", ccc);
	printf("address of 'ccc': %p\n", &ccc);
	*cc = 'o';
	ccc = 'l';
}

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';

	printf("\tbefore the call\n");
	printf("\t---------------\n");
	printf("value of 'c': %c\n", c);
	printf("address of 'c': %p\n", &c);
	printf("value of 'p': %p\n", p);
	printf("address of 'p': %p\n", &p);
	printf("value of address that holded by 'p': %c\n", *p);

	modif_my_char_var(p, c);

	printf("==========================================\n");
	printf("\tafter the call\n");
	printf("\t--------------\n");
	printf("value of 'c': %c\n", c);
	printf("address of 'c': %p\n", &c);
	printf("value of 'p': %p\n", p);
	printf("address of 'p': %p\n", &p);
	printf("value of address that holded by 'p': %c\n", *p);
	return (0);
}
