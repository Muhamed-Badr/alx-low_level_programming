#include <stdio.h>

int main(void)
{
	int i, count = 0;

	printf("% .2f\n", -15.5);
	printf("% .2f\n", 15.5);

	puts("\t=========");

	printf("%*.2f\n", 10, 15.5);
	printf("%*.2f\n", -10, 15.5);

	puts("\t=========");
	
	printf("%4.8s\n", "Hi");
	printf("%4.8s\n", "Hello, Geeks :)");

	puts("\t=========");

	/* Hello, Geeks :) */
	
	for (i = 0; i < 5/*1024*/; i++)
		printf("*");
	printf("\n");


	puts("\t=========");

	/* printf("Value:  %d %s\n", i, i); */

	/*
	printf("[1] This is a percent sign: %%\n");
	printf("[2] This is a percent sign: %\n");
	//printf("\n");
	printf("[3] This is a percent sign: \%\n");
	//printf("\n");
	printf("[4] This is a percent sign: %d");
	printf("\n");
	*/

	printf("[1] i: %d\n", i);
	printf("Hello, Geeks :)\n\n[2] i: %d%n\nhi, Geeks\n%n", 42, &i, &i);
	printf("[3] i: %d\n", i);
	puts("===");
	printf("[1] count: %d\n", count);
	printf("[2] count: %d%n\n", 42, &count);
	printf("[3] count: %d\n", count);

	return (0);
}
