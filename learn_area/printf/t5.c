#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char *str;
	int n;
	
	if (argc != 2)
	{
		printf("error\n");
		return (0);
	}
	
	/*
	printf("n:% 0#x5d\n", 5);
	printf("n:%0 #X5d\n", 5);

	printf("n:% 05d\n", -5);
	printf("n:%0 5d\n", -5);

	printf("n:%+#x05d\n", 5);
	printf("n:%0#X+5d\n", 5);

	printf("n:%#x+05d\n", -5);
	printf("n:%#X0+5d\n", -5);

	printf("n:%+ #x05d\n", 5);
	printf("n:%0+ #X5d\n", 5);

	printf("n:% +05d\n", -5);
	printf("n:%0+ 5d\n", -5);
*/
	/*
	printf("n:%#1d\n", 1455);
	printf("n:%#1d\n", 1455);
*/

	/*
	n = printf("n:%4.3f", 1.2);
	putchar('\n');
	printf("n: %d\n", n);
	n = printf("n:%6.1f\n", 1.2);
	printf("n: %d\n", n);
	n = printf("n:%2.3d\n", 14);
	printf("n: %d\n", n);


	str = argv[1];

	printf("sizeof(\"%s\"): %ld\n", str, strlen(str));
	n = printf(str);
	
	putchar('\n');
	putchar(n + '0');
	putchar('\n');

	printf("n:%.3d\n", 1);
	printf("n:%.3d\n", 123);
	printf("n:%.3d\n", 1234);
	printf("n:%.0d\n", 1);
	printf("n:%.4d\n", 1);
	printf("n:%3.3d\n", 1);
	printf("n:%5.100f\n", 1.12345678912345566867567575676546546);
	printf("n:%5.100f\n", (double)1.12345678912345566867567575676546546);
	*/

	printf("n:%07.*f\n", 2, 1.123);
	printf("n:%0*.4f\n", 6, 1.123);
	printf("n:%0*f\n", 7, 1.123);
	printf("n:%0*f\n", 1, 1.123);
	printf("n:%0*f\n", 2, 1.123);
	printf("n:%0*f\n", 3, 1.123);
	printf("n:%0*f\n", 5, 1.123);


	return (0);
}
