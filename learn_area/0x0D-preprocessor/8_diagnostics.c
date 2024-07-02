#include <stdio.h>

/*
 * Diagnostic Driectives:
 *  1. The `#error` directive: it causes the preprocessor to report a fatal
 *      error, and stop preprocessing/compilation.
 *  2. The `#warning` directive: it is like ‘#error’, but causes the
 *      preprocessor to issue a warning, and continue
 *      preprocessing/compilation.
 */

/* #define FOO */
#define BAR

#define PLATFORM_VERSION 5

#if !defined(FOO) && defined(BAR)
#error "BAR requires FOO."
#endif

#if (PLATFORM_VERSION < 3)
#warning "Platform version Recommended to be higher than 3."
#endif


int main(void)
{
	puts("Hello, Geeks :)");

	return (0);
}
