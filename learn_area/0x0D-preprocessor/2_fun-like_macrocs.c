#include <stdio.h>
void foo(char *s)
{
	puts(s);
}

#define foo(x) puts(x)
/*
 * #define foo (x) puts(x)
 *
 * It's an object-like macros, Not a fun-like macros
 *  and will expanded to `(x) puts(x)`
 * 
 * EX:-
 *  foo("hello"); -> `(x) puts(x)("hello");`
 *
 * NOTE:-
 *  it'll not result in an error in the preprocessor phase (run `gcc -E file`)
 *   but will result in an error in other phases (because macros will then
 *   expand to invalid code)
 *   and the executable file will not produced (run `gcc file`)
 */

/* implement a fun-like macros in multiple lines using backslash-newline */
#define min3(x, y, z) ((x <= y) ? \
		((x <= z) ? x : z) : \
		((y <= z) ? y : z))
#define min(x, y) ((x <= y) ? x : y)

int main(void)
{
	int a = 1, b = 2, c = 3, *p = &b, res;

	foo("Hello, Geeks :)");
	foo ("Welcome, with func-like macros");

	res = min3(a, b, c);
	printf("min3(%d, %d, %d): %d\n", a, b, c, res);

	res = min3(1, 2, 3);
	printf("min3(%d, %d, %d): %d\n", 1, 2, 3, res);

	/* invoke a fun-like macros in multiple lines using backslash-newline */
	res = min3(a + 28, \
			*p, c);
	printf("min3(%d, %d, %d): %d\n", a + 28, *p, c, res);

	/* use a chaine of fun-like macros */
	res = min(min(a, b), c);
	printf("min(min(%d, %d), %d): %d\n", a, b, c, res);

	/*
	 * NOTES:-
	 *  1- You must match the nubmer of macro arguments; if a macro takes 2
	 *      arguments, there must be exactly 1 comma between its argument list
	 *      when you invoke the macro, and so on.
	 *  2- You can leave macro arguments empty; this is not an error to the
	 *      preprocessor (but macros will then expand to invalid code).
	 *  3- A comma within the parentheses does not end the argument(parentheses
	 *      are considered as one argument).
	 *
	 * Here are some examples using `min(x, y)`:
	 * EX:-
	 *  1- res = min(, b);        --> res = (( <= b) ? : b);
	 *  2- res = min(a, );        --> res = ((a <= ) ? a : );
	 *  3- res = min(,);          --> res = (( <= ) ? : );
	 *  4- res = min((a, b), c);  --> res = (((a, b) <= c) ? (a, b) : c);
	 *  5- res = min((,),);       --> res = (((,) <= ) ? (,) : );
	 *  6- res = min(a);          --> error: macro "min" requires 2 arguments,
	 *                                       but only 1 given
	 *  7- res = min();           --> error: macro "min" requires 2 arguments,
	 *                                       but only 1 given
	 *  8- res = min(,,);         --> error: macro "min" passed 3 arguments,
	 *                                       but takes just 2
	 *  9- res = min(a, b, c);    --> error: macro "min" passed 3 arguments,
	 *                                       but takes just 2
	 */

	return (0);
}
