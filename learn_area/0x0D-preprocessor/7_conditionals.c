#include <stdio.h>
#if 0
/*
 * The conditionals are directives that instruct the preprocessor to select
 *  whether or not to include a chunk of code in the final token stream passed
 *  to the compiler. Preprocessor conditionals can test arithmetic expressions,
 *  or whether a name is defined as a macro, or both simultaneously using the
 *  special `defined` operator.
 * A conditional in the C preprocessor resembles in some ways an if statement
 *  in C, but it is important to understand the difference between them.
 *  The condition in an if statement is tested during the execution of your
 *  program. Its purpose is to allow your program to behave differently from
 *  run to run, depending on the data it is operating on. The condition in a
 *  preprocessing conditional directive is tested when your program is
 *  compiled. Its purpose is to allow different code to be included in the
 *  program depending on the situation at the time of compilation.
 *
 *  +-------------+-----------------------------------------------------------+
 *  |  directive  |                              Usage                        |
 *  +-------------+-----------------------------------------------------------+
 *  |   #ifdef    | Checks if a macro is defined.                             |
 *  +-------------+-----------------------------------------------------------+
 *  |   #ifndef   | Checks if a macro is not defined.                         |
 *  +-------------+-----------------------------------------------------------+
 *  |   #if       | Checks the value of an expression/condition.              |
 *  +-------------+-----------------------------------------------------------+
 *  |   #elif     | Combines `else` and `if` to create a chain of conditions. |
 *  +-------------+-----------------------------------------------------------+
 *  |   #else     | Used with previous directives if the condition fails,     |
 *  |             |  to provide an alternative code to be used.               |
 *  +-------------+-----------------------------------------------------------+
 *  |   #endif    | Ends the previous conditional directive block.            |
 *  +-------------+-----------------------------------------------------------+
 *
 * NOTE:
 *   1- The special operator `defined` is used in ‘#if’ and ‘#elif’ expressions
 *       to test if a macro defined. `defined MACRO` and `defined (MACRO)` are
 *       both expressions whose value is ‘1’ if `MACRO` is defined as a macro
 *       at the current point in the program, and 0 otherwise.
 *       Thus, `#if defined MACRO` is equivalent to `#ifdef MACRO`.
 *      The `defined` is useful when you wish to test more than one macro
 *       for existence at once. For example,
 *      ```C
 *      #if (defined (MACRO_1) || defined (MACRO_2)) && !defined (MACRO_3)
 *      ```
 *   2- The (#if, #ifdef, and #ifndef) directives require a matching ‘#endif’
 *       at the end of them.
 *   3- The `#elif` goes in the middle of a conditional group, it is used
 *       after the `#if`, and it doesn't require a matching ‘#endif’.
 *   4- The `#else` goes at the end of a conditional group, and it doesn't
 *       require a matching ‘#endif’.
 *   5- The Macros which is not defined, it will be interpreted as having the
 *       value zero in conditional Expressions of conditional directives.
 */
#endif /* End of removed part (act as a comment in the code) */


#define UNIX /* or (WIN, MAC, nothing/don't define anything) */
#define DEBUG 2 /* or (1, 3, nothing/don't define anything)*/

#ifdef UNIX
#define OS "UNIX"
#elif defined (WIN)
#define OS "WIN"
#elif defined (MAC)
#define OS "MAC"
#else
#define OS ""
#endif /* #ifdef UNIX */

int main(void)
{
	printf("Operating System: %s\n", OS);

#if (DEBUG == 1)
	printf("Debug mode is running at level[%d]...\n", DEBUG);
#elif (DEBUG == 2)
	printf("Debug mode is running at level[%d]...\n", DEBUG);
#elif (DEBUG == 3)
	printf("Debug mode is running at level[%d]...\n", DEBUG);
#else
	puts("Debug mode is off."); /* if `DEBUG` macro is not defined
								   OR != one of tese (1, 2, or 3)
								   */
#endif /* #if (DEBUG == 0) */

	return (0);
}

