#include "main.h"

/**
 * main - entry point
 *
 * Description: prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 *
 * Extra:
 *+the main idea of solving this challenge is how to separate numbers
 * into 2 parts, calculate each part individually, and then concat
 * these 2 parts again when printing but ensure that this calculating operation
 * will result in a correct number as if we didn't separate the number
 *
 *+ensure that each part digit will not exceed the l_h_d digits OR will
 * result in an incorrect operation
 *
 ***Example.1:
 * -> if a = 935, b = 240 -> find F(a + b)
 *
 * assume l_h_d = 100
 * a2 = 935 % 100 -> a2 = 35 -> 1st number, part 2
 * a1 = 935 / 100 -> a1 = 9  -> 1st number, part 1
 * b2 = 240 % 100 -> b2 = 40 -> 2nd number, part 2
 * b1 = 240 / 100 -> b1 = 2  -> 2nd number, part 1
 * c = a2 + b2 = 35 + 40 = 75
 * d = a1 + b1 = 9 + 2 = 11
 * F(a + b) = a + b = 935 + 240 = "d""c" = "11""75" = 1175
 * ======
 * But this have a problem, what if we want to add (7175 + 6175)!!!:(
 * lets solve this problem by use mathematic equation "d + (c / 100)""c % 100"
 * ======
 ***Example.2:
 * -> if a = 7175, b 6175 -> find F(a + b)
 *
 * assume l_h_d = 100
 * a2 = 7175 % 100 -> a2 = 75 -> 1st number, part 2
 * a1 = 7175 / 100 -> a1 = 71 -> 1st number, part 1
 * b2 = 6175 % 100 -> b2 = 75 -> 2nd number, part 2
 * b1 = 6175 / 100 -> b1 = 61 -> 2nd number, part 1
 * c = a2 + b2 = 75 + 75 = 150
 * d = a1 + b1 = 71 + 61 = 132
 *+ if we do this (non correct operation)
 * F(a + b) = "d""c" = 132150 (not correct)
 *+ while (original operation)
 * F(a + b) = a + b = 7175 + 6175 = 13350 (correct)
 *+ when use equation "d + (c / 100)""c % 100"
 *+ SO (correct operation like original)
 * F(a + b) = a + b = 7175 + 6175
 *          = "d + (c / 100)""c % 100"
 *          = "132 + (150 / 100)""150 % 100" = 13350 (yes, finally got it)
 * ======
 * *NOTE:
 * 1. be careful of data type capacity (do not exceed
 *    the range of each data type OR 'overflow' will happen)
 * 2. used variables shortcuts:
 *    - count -> counter
 *    - cur   -> current
 *    - bef   -> before
 *    - p     -> part
 *    - fibo  -> fibonacci
 *    - l     -> long
 *    - h     -> half
 *    - d     -> digit
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	short int count = 0;
	unsigned long c_f_p1 = 0, c_f_p2 = 0, b_c_f_p1 = 1, b_c_f_p2 = 0,
		      b_b_c_f_p1 = 0, b_b_c_f_p2 = 0, l_h_d = 1000000000;
	while (count < 91)
	{
		/*calculate Fibonacci number*/
		c_f_p1 = b_c_f_p1 + b_b_c_f_p1;
		b_b_c_f_p1 = b_c_f_p1, b_c_f_p1 = c_f_p1;
		/*format & print Fibonacci number*/
		if (count++ != 0)
			printf(", ");
		printf("%lu", c_f_p1);
	}
	/*
	 * return the number to the safe side of 'unsigned long' range
	 * by dividing it into 2 parts
	 * and then
	 * concatenating it again when printing
	 */
	b_b_c_f_p2 = b_b_c_f_p1 % l_h_d, b_b_c_f_p1 = b_b_c_f_p1 / l_h_d;
	b_c_f_p2 = b_c_f_p1 % l_h_d, b_c_f_p1 = b_c_f_p1 / l_h_d;
	while (count++ < 98)
	{
		/*calculate each part of Fibonacci number individually*/
		c_f_p1 = b_c_f_p1 + b_b_c_f_p1;
		b_b_c_f_p1 = b_c_f_p1, b_c_f_p1 = c_f_p1;
		c_f_p2 = b_c_f_p2 + b_b_c_f_p2;
		b_b_c_f_p2 = b_c_f_p2, b_c_f_p2 = c_f_p2;
		/*format & print Fibonacci number*/
		printf(", %lu%lu", c_f_p1 + (c_f_p2 / l_h_d), c_f_p2 % l_h_d);
	}
	printf("\n");
	return (0);
}
