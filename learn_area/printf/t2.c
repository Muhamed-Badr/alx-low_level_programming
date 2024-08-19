#include <stdio.h>

int main(int argc, char **argv)
{
	int n1, n2, n3;
	char buf[20000], *p;

	p = NULL;

	while (fgets(buf, sizeof(buf), stdin))
		p = buf;

	printf("%s%n%s%n\n", p, &n1, p, &n2);
	printf("n1: %d\n", n1);
	printf("n2: %d\n", n2);

	puts("\t=========");

		printf("%s%n\n", argv[1], &n3);
	printf("n3: %d\n", n3);
	/*
	   printf("hello: %nFoo\n", &n);
	   printf("n: %d\n", n);
	 */

	//printf("%s: %nFoo\n", "Hello", &n);
	//printf("%*sBar\n", n, "");

	// printf("Hello, Geeks :)\n\n[+] n: %d%n\nhi, Geeks\n%n", 42, &n, &n);
	// printf("[+] n: %d\n", n);

	// puts("===");

	// printf("[+] n: %d%n\n", 42, &n);
	// printf("[+] n: %d\n", n);

	return (0);
}

