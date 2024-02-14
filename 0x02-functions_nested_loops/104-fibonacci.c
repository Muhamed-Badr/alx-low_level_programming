#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 *
 * *NOTE:
 * 1. be careful of data type capacity (do not exceed
 *    the range of each data type OR 'overflow' will happen)
 * 2. used words shortcuts:
 *    - count -> counter
 *    - cur   -> current
 *    - bef   -> before
 *    - 1     -> part 1
 *    - 2     -> part 2
 *    - fibo  -> fibonacci
 *    - l     -> long
 *    - m     -> max
 *    - h     -> half
 *    - d     -> digit
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	short int count = 0;
	unsigned long c_f1 = 0, c_f2 = 0, b_c_f1 = 1, b_c_f2 = 0, b_b_c_f1 = 0,
	b_b_c_f2 = 0, l_m_d = 1000000000000000000, l_h_d = 1000000000;
	while (count < 98)
	{
		/*exit when the number will exceed 'unsigned long' range*/
		if (c_f1 > l_m_d)
			break;
		/*calculate Fibonacci number*/
		c_f1 = b_c_f1 + b_b_c_f1, b_b_c_f1 = b_c_f1, b_c_f1 = c_f1;
		/*format & print Fibonacci number*/
		if (count++ != 0)
			printf(", ");
		printf("%lu", c_f1);
	}
	/*
	 * return the number to the safe side of 'unsigned long' range
	 * by dividing it into 2 parts
	 * and then
	 * concatenating it again when printing
	 */
	b_b_c_f2 = b_b_c_f1 % l_h_d, b_b_c_f1 = b_b_c_f1 / l_h_d;
	b_c_f2 = b_c_f1 % l_h_d, b_c_f1 = b_c_f1 / l_h_d;
	while (count++ < 98)
	{
		/*calculate each part of Fibonacci number individually*/
		c_f1 = b_c_f1 + b_b_c_f1, b_b_c_f1 = b_c_f1, b_c_f1 = c_f1;
		c_f2 = b_c_f2 + b_b_c_f2, b_b_c_f2 = b_c_f2, b_c_f2 = c_f2;
		/*format & print Fibonacci number*/
		printf(", %lu%lu", c_f1, c_f2);
	}
	printf("\n");
	return (0);
}
