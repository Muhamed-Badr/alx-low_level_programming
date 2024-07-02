#include <stdio.h>


# /*
   * comments are replaced by 1 single space
   *  in preprocessor phase (run `cpp file` OR `gcc -E file`)
*/ def\
ine \
PUTS p\
u\
t\
s
/* Line splicing let us to creat code in multiple lines
 *  using backslash-newline
 * so the above is equivalent to #define PUTS puts
 */

/*
 * When the preprocessor expands a macro name, the macro’s expansion
 *  replaces the macro invocation, then the expansion is examined
 *  for more macros to expand.
 * EX:-
 *  ```C
 *   #define TABLESIZE BUFSIZE
 *   #define BUFSIZE 1024
 *  ```
 *   TABLESIZE
 *       → BUFSIZE
 *         → 1024
 */

/*
 * The C preprocessor scans your program sequentially.
 *  Macro definitions take effect at the place you write them.
 *
 * EX:-
 *  ```C
 *   int foo = x;
 *   #define x 4
 *   int bar = x;
 *  ```
 *
 * after C preprocessor it produces:
 *  ```C
 *   foo = x;
 *   bar = 4;
 *  ```
 */

#define BUFSIZE 1020
#define TABLESIZE BUFSIZE
int a = TABLESIZE;
#undef BUFSIZE
#define BUFSIZE 37

#define PI 3.14
#define f float

f area(f r)
{
	return (PI * (r) * (r));
}

int main(void)
{
	f rr, res;

	PUT\
S("Hello, Geeks :)");
	
	if (a == 1020)
		PUTS("Done [1020] :)");
	else
		PUTS("Not Done :(");

	a = TABLESIZE;
	
	if (a == 37)
		puts("Done [37] :)");
	else
		puts("Not Done :(");

	printf("enter the circle radius: ");
	scanf("%f", &rr);

	res = area(rr);

	printf("the circle area: %f\n", res);

	return (0);
}

