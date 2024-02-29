#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Description: This program generates random valid passwords
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	short int rand_num, sum = 0, min = 1, max = 127;

	srand(time(NULL)); /* set the seed of 'rand()' function */

	/* 2772 it's the number used as a condition in '101-crackme' */
	while (sum < 2772)
	{
		/*
		 * decimal numbers from 0 to 127 represent all ASCII characters
		 */
		rand_num = min + (rand() % (max - min + 1));

		if ((sum + rand_num) > 2772)
			break;

		_putchar(rand_num);
		sum += rand_num;
	}
	_putchar(2772 - sum); /* print the last character */
	/*_putchar('\n');*/

	/* printf("final sum: %d\n", sum + (2772 - sum)); */
	/*the above printf confirms to you that the final sum will always = 2772*/

	return (0);
}
