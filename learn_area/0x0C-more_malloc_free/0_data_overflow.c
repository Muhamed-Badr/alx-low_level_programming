#include <stdio.h>

/* Function to print the binary representation of a number */
void printBinary(unsigned int num);

int main(void)
{
	char c;
	unsigned char cc;
	void *p = &c, *pp = &cc;
	int i, ii;

	/* try to start with these values `126`, `127`, `254` and `255` */
	printf("enter number: ");
	scanf("%d", &i);
	ii = i;
	c = i;
	cc = i;

	printf("`char c = %d;`: \n\t#char: %c\n\t#int : %d\n\t#bin : ", i, c, c);
	printBinary(c);
	/*
	 * `a_bin` stands for "actual binary" and it represents the binary of
	 * a spacific value where this value is stored in 4 Bytes(32 bit) in memory
	 */
	printf("\ta_bin: ");
	printBinary(i);
	printf("\n");

	c++;
	i++;
	printf("`char c = %d;`: \n\t#char: %c\n\t#int : %d\n\t#bin : ", i, c, c);
	printBinary(c);
	printf("\ta_bin: ");
	printBinary(i);
	printf("\n");

	c++;
	i++;
	printf("`char c = %d;`: \n\t#char: %c\n\t#int : %d\n\t#bin : ", i, c, c);
	printBinary(c);
	printf("\ta_bin: ");
	printBinary(i);
	/* printBinary(*(iint *)p); */

	/***************************************************************************/
	printf("\n\t\t****************************************\n");
	printf("\n\t\t****************************************\n\n");

	printf("`u char c = %d;`: \n\t#char: %c\n\t#int : %d\n\t#bin : ", ii, cc, cc);
	printBinary(cc);
	printf("\ta_bin: ");
	printBinary(ii);
	printf("\n");

	cc++;
	ii++;
	printf("`u char c = %d;`: \n\t#char: %c\n\t#int : %d\n\t#bin : ", ii, cc, cc);
	printBinary(cc);
	printf("\ta_bin: ");
	printBinary(ii);
	printf("\n");

	cc++;
	ii++;
	printf("`u char c = %d;`: \n\t#char: %c\n\t#int : %d\n\t#bin : ", ii, cc, cc);
	printBinary(cc);
	printf("\ta_bin: ");
	printBinary(ii);
	/* printBinary(*(int *)pp); */
	printf("\n");

	return (0);
}

/* Function to print the binary representation of a number */
void printBinary(unsigned int num)
{
	int i;

	/* Start from the most significant bit (leftmost) */
	for (i = sizeof(num) * 8 - 1; i >= 0; i--)
	{
		/* Check if the bit at position i is set (1) or clear (0) */
		if (num & (1u << i))
			printf("1");
		else
			printf("0");

		/* Insert a space for readability */
		if (i % 4 == 0)
			printf(" ");
	}
	printf("\n");
}
