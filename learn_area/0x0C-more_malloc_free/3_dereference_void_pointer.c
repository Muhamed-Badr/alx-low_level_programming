#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	/*
	 * int a = 5;
	 * void *p = &a;
	 */
	void *p = malloc(1 * sizeof(int));

	printf("*p: %d\n", *p);

	/*
	 * this will result in an error
	 * ```shell
	 * 3_main.c: In function ‘main’:
	 * 3_main.c:12:20: warning: dereferencing ‘void *’ pointer
	 *    12 |  printf("a: %d\n", *p);
	 *       |                    ^~
	 * 3_main.c:12:20: error: invalid use of void expression
	 * ```
	 */



	return (0);
}
