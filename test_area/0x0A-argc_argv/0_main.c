#include <stdio.h>

void say_hello(int x /*__attribute__((unused))*/)
{
	int a, b; /* __attribute__((unused)); */
	/*
	   (void)a;
	   (void)x;
	 */
	printf("hello, wrold!\n");
}

int main(int argc, char *argv[]/*, char *envp[], char *t[]*/)
{
	int i;

	printf("the number of arguments passed: %d\nprogram name: %s\n", argc, argv[0]);

	for(i = 1; i < argc; i++)
		printf("argv[%d]: %s\n", i, argv[i]);

	printf("argv[%d]: %s\n\n", i, argv[i]);
	printf("sizeof(argv[%d]): %ld\n\n", i, sizeof(argv[i]));

	/*
	   printf("\t\t====================================\n\n");
	   for(i = 0; i < 15; i++) 
	   printf("envp[%d]: %s\n", i, envp[i]);

	   printf("envp[%d]: %s\n\n", i, envp[i]);
	 */
	/*
	   printf("envp[%d]: %s\n\n", i + 1, envp[i + 1]);
	 */

	/*
	   printf("\t\t====================================\n\n");
	   for(i = 0; i < 15; i++)
	   printf("argv[%d]: %s\n", i, argv[i]);

	   printf("argv[%d]: %s\n", i, argv[i]);
	   printf("argv[%d]: %s\n", i + 1, argv[i + 1]);
	   printf("argv[%d]: %s\n", i + 2, argv[i +  2]);
	 */
	/* printf("argv[%d]: %s\n\n", i + 3, argv[i + 3]); */

	/*
	   printf("\t\t====================================\n\n");
	   i = 0;
	   printf("t[%d]: %s\n\n", i, t[i]);
	 */

	return (0);
}
