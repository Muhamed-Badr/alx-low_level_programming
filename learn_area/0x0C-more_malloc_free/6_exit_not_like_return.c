#include<stdio.h>
#include<stdlib.h>
int try_to_return(void);
void try_to_exit(void);
void say_goodbye(void);

int main(void)
{
	puts("I'm inside `main()`\n");

	/*
	 * The `atexit();`:
	 *        it registers a specific function to be called as the last thing
	 *        that will be executed before the program termination directly
	 *     -> in our case, this function is `say_goodbye()`
	 */
	if (atexit(say_goodbye) != 0)
	{
		fprintf(stderr, "Failed to register `say_goodbye()` function\n");
		return 1;
	}

	/* try to uncomment the next line and observe what will happen */
	/* try_to_exit(); */

	try_to_return();
	puts("I'm here back in `main()`");
	puts("\tafter calling `try_to_return()` function\n");

	try_to_exit(); /* anything after this line will not be executed */
	puts("I'm here back in `main()`");
	puts("\tafter calling `try_to_exit()` function\n");

	return (0);
}

int try_to_return(void)
{
	puts("I'm inside `try_to_return()`\n");
	return (0);
	/* 
	 * anything after the above line will not be executed
	 * only in this function & this will not affect the ececutation
	 * of the whole program
	 */

	puts("Hi `try_to_return()` function\n");
}

void try_to_exit(void)
{
	puts("I'm inside `try_to_exit()`\n");
	exit(0);
	/* 
	 * anything after the above line will not be executed
	 * in the whole program
	 */

	puts("Hi `try_to_exit()` function\n");
}

void say_goodbye(void)
{
	puts("GoodBye Programmers! :)\n");
	return;
	/* 
	 * anything after the above line will not be executed
	 * only in this function & this will not affect the ececutation
	 * of the whole program
	 */

	puts("Hi `say_goodbye()` function\n");
}
