#include "main.h"

/**
 * _pow_recursion - returns the value of 'x' raised to the power of 'y'.
 * @x: base integer number
 * @y: power integer number
 *
 * Description: the below approach is good for performance,
 * check this youtube video
 *   https://youtu.be/wAyrtLAeWvI?list=PL2_aWCzGMAwLz3g66WrxFGSXvSsvyfzCO
 *
 * Return: value of 'x' power 'y'
 */
int _pow_recursion(int x, int y)
{
	int even;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y % 2 == 0)
	{
		even = _pow_recursion(x, y / 2);
		return (even * even);
	}
	return (x * _pow_recursion(x, y - 1));
}
