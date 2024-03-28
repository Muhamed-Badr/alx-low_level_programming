#include "main.h"

/**
 * sqrt_recursion_wrapper - returns the natural square root of a number.
 * @n: The passed integer number
 * @guess: the guess number to square root of 'n'
 * @prev_guess: the previous guess number to square root of 'n'
 *
 * Description: for more information about how to get the square root
 *    https://en.m.wikipedia.org/wiki/Methods_of_computing_square_roots
 * i use the Heron's method (add '#Heron's_method' to the end of above URL)
 *
 * ->note
 *  each comment starts with (d) it's used for debugging
 *    and test the performance of the solution
 *
 * Return: the natural square root of 'n' if (n >= 0)
 * -1 if (n < 0) (negative number)
 */
/*(d) int sqrt_recursion_wrapper(int n,double guess,double prev_guess,int i)*/
int sqrt_recursion_wrapper(int n, double guess, double prev_guess)
{
	/*
	 * (d)
	 * if (i == 0)
	 *     printf("during find `sqrt(%d)` we guess: ", n);
	 */
	prev_guess = guess;
	guess = (prev_guess + (n / prev_guess)) / 2; /* Heron's method */
	/* (d) printf("`#i:%d`. p:%d g:%d ", ++i, prev_guess, guess); */

	if (guess == prev_guess)
	{
		/*
		 * check if there is a fractional part in 'guess'
		 * if exists the 'n' doesn't have a square root
		 */
		if (guess != (int)guess)
		{
			/* (d) printf("\n"); */
			return (-1);
		}
		else
		{
			/* (d) printf("\n"); */
			return (guess);
		}
	}

	/* (d) return (sqrt_recursion_wrapper(n, guess, prev_guess, i)); */
	return (sqrt_recursion_wrapper(n, guess, prev_guess));
}

/*
 * -> this is the same with above solution but using loop
 *
 * (d) int sqrt_loop_wrapper(int n,double guess,double prev_guess, int i)
 * int sqrt_loop_wrapper(int n,double guess,double prev_guess)
 * {
 *     // (d) printf("during find `sqrt(%d)` we guess: ", n);
 *     while (1)
 *     {
 *         prev_guess = guess;
 *         guess = (prev_guess + (n / prev_guess)) / 2; // Heron's method

 *         // (d) printf("`#i:%d`. p:%d g:%d ", ++i, prev_guess, guess);

 *         if (guess == prev_guess)
 *         {
 *             if (guess != (int)guess)
 *             {
 *                 // (d) printf("\n");
 *                 return (-1);
 *             }
 *             else
 *             {
 *                 // (d) printf("\n");
 *                 return (guess);
 *             }
 *         }
 *     }
 * }
 */


/*
 * -> 2nd sol
 * it's straight forward solution and it's very bad for performance
 *
 * int sqrt_recursion_wrapper(int n, int i)
 * {
 *      // (d)
 *      // if (i == 0)
 *      //     printf("during find `sqrt(%d)` we guess: ", n);
 *      // printf("%d ", i);
 *
 *     if (i * i >= n)
 *     {
 *         if (i * i == n)
 *         {
 *             // (d) printf("\n");
 *             return (i);
 *         }
 *         else
 *         {
 *             // (d) printf("\n");
 *             return (-1);
 *         }
 *
 *     }
 *     return (sqrt_recursion_wrapper(n, i + 1));
 * }
 */

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: The passed integer number
 *
 * Return: the natural square root of 'n' if (n >= 0)
 * -1 if (n < 0) (negative number)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (sqrt_recursion_wrapper(n, 1, 0));
	/* else return (sqrt_recursion_wrapper(n, 0)); // for 2nd sol */
	/* (d) else return (sqrt_recursion_wrapper(n, 1, 0, 0)); */
}
