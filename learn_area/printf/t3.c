#include <stdio.h>

int main(void)
{
	/*
	int i;
	i = 0;

	printf("%d\n", i);
*/
	int n1, n2, n3, n;

	char *str;

	/*
	str = "****************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************";
*/
	str = "********************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************";

	n = printf("Hello: %s%n\nthen: %s%n\nand then: %s%n", str, &n1, str, &n2, str, &n3);
	printf("\nn1: %d\nn2: %d\nn3: %d\n", n1, n2, n3);
	printf("returned number from `printf()`: %d\n", n);
	return (0);
}
