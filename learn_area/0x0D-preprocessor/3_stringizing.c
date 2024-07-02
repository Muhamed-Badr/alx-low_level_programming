#include <stdio.h>

#define xstr(s) str(s)
#define str(s) #s
#define foo 4
/*
 * #define xstr(s) DUAL_EXPAND(str1(s))
 * #define DUAL_EXPAND(s) str(s) #s
 * #define str1(s) foo1
 * #define foo1 5
 */

#define a ":)"

/*
 * Stringizing ‘#’:
 *   When a macro parameter is used with a leading ‘#’ preprocessing operator,
 *   the preprocessor replaces it with the literal text of the actual argument,
 *   converted to a string constant. Unlike normal parameter replacement,
 *   the argument is not macro-expanded first. (run `cpp file`)
 *
 */
#define WARN_IF(EXP) \
	do { if (EXP) \
		fprintf (stderr, "Warning: " #EXP "\n"); } \
		while(0)

int main(void)
{
	int x = 0;
	char *p;

	printf("hello, " "wrold " a "\n" xstr(foo) "\n" str(foo) "\n");

	WARN_IF(x == 0);
	WARN_IF(p = "foo\n");

	return (0);
}
