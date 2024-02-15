#include "../main.h"

/**
 * positive_or_negative - test if number stored in the variable 'n' is
 * positive or negative or equal to 0.
 * @i: The passed integer number
 *
 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
