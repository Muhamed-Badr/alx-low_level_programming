#include <stdio.h>
#include <iso646.h>

/*
 * Predefined macros:
 *  Several object-like macros are predefined; you use them without supplying
 *  their definitions. They fall into three classes:
 *    1. standard Predefined macros.
 *    2. common Predefined macros.
 *    3. system-specific Predefined macros.
 *  In C++, there is one more category, it's the named operators.
 *   4. c++ named operators: They act like predefined macros, but you cannot
 *                            undefine them.
 *
 * 1. standard Predefined macros: The standard predefined macros are specified
 *     by the relevant language standards, so they are available with all
 *     compilers that implement those standards.
 *     Older compilers may not provide all of them.
 *     Their names all start with double underscores.
 *  +----------------+--------------------------------------------------------+
 *  | Predefined     |                         Macro                          |
 *  |   Macro        |                      Explanation                       |
 *  +----------------+--------------------------------------------------------+
 *  |  __FILE__      |expands to the name(path) of the current input file.    |
 *  |                |the file path by which the preprocessor opened the file |
 *  +----------------+--------------------------------------------------------+
 *  |  __LINE__      |expands to integer number which is the line number      |
 *  |                |where we call it, its “definition” changes with each    |
 *  |                |new line of source code.                                |
 *  +----------------+--------------------------------------------------------+
 *  |  __DATE__      |This macro expands to a string constant that describes  |
 *  |                |the date on which the preprocessor is being run.        |
 *  +----------------+--------------------------------------------------------+
 *  |  __TIME__      |This macro expands to a string constant that describes  |
 *  |                |the time at which the preprocessor is being run.        |
 *  +----------------+--------------------------------------------------------+
 *  |  __STDC__      |expands to 1, if the compiler use the ISO Standard C.   |
 *  |                |On some hosts, the system compiler uses a different     |
 *  |                |convention, where __STDC__ is normally 0                |
 *  +----------------+--------------------------------------------------------+
 *  |__STDC_VERSION__|expands to the C Standard’s version number              |
 *  +----------------+--------------------------------------------------------+
 *  |  __cplusplus   |is defined when the C++ compiler is in use. You can use |
 *  |                |__cplusplus to test whether a header is compiled by a C |
 *  |                |compiler or a C++ compiler. similar to __STDC_VERSION__ |
 *  +----------------+--------------------------------------------------------+
 *  | __ASSEMBLER__  |is defined when the assembler is running, which allows  |
 *  |                |integrate assembly code with C/C++ code while ensuring  |
 *  |                |that each part is processed by the appropriate tool.    |
 *  +----------------+--------------------------------------------------------+
 * 4. c++ named operators:
 *     the 'iso646.h' header file to request/use the c++ named operators in C.
 *      it defines each one as a normal object-like macro expanding to
 *      the corresponding punctuator as fellow:
 *  +----------------+------------+
 *  | Named Operator | Punctuator |
 *  +----------------+------------+
 *  |      and       |     &&     |
 *  +----------------+------------+
 *  |      and_eq    |     &=     |
 *  +----------------+------------+
 *  |      bitand    |     &      |
 *  +----------------+------------+
 *  |      bitor     |     |      |
 *  +----------------+------------+
 *  |      compl     |     ~      |
 *  +----------------+------------+
 *  |      not       |     !      |
 *  +----------------+------------+
 *  |      not_eq    |     !=     |
 *  +----------------+------------+
 *  |      or        |     ||     |
 *  +----------------+------------+
 *  |      or_eq     |     |=     |
*  +----------------+------------+
*  |      xor       |     ^      |
*  +----------------+------------+
*  |      xor_eq    |     ^=     |
*  +----------------+------------+
*/

/*
 * Line Control(‘#line’ directive): is a directive that specifies the original
 *  line number and source file name for subsequent input in the current
 *  preprocessor input file. ‘#line’ has three forms:
 *   1. `#line linenum`: ‘linenum’ is a non-negative decimal integer constant.
 *       It specifies the line number which should be reported for the
 *       following line of input. Subsequent lines are counted from ‘linenum’.
 *   2. `#line linenum filename`: ‘linenum’ is the same as for the first form,
 *       and has the same effect. In addition, ‘filename’ is a string constant.
 *       The following line and all subsequent lines are reported to come from
 *       the file it specifies, until something else happens to change that.
 *   3. `#line anything else`: ‘anything else’ is checked for macro calls,
 *       which are expanded. The result should match one of the above
 *       two forms.
 */

#define LINE_NUM 50
#define FILE_NAME "TEST_#line.c"

int main(int argc, char **argv)
{
	if (argc not_eq 2 or *argv[1] not_eq '0')
	{
		puts("Error :(");
		return (1);
	}

	puts("Done :)");
	printf("__FILE__: %s\n" "__BASE_FILE__: %s\n", __FILE__, __BASE_FILE__);
	printf("__LINE__: %d\n" "__DATE__: %s\n", __LINE__, __DATE__);
	printf("__TIME__: %s\n" "__STDC__: %d\n", __TIME__, __STDC__);
	/* `#line filename` this form is not allowed, and will cause an error */
#line 5
	puts("\t#============#");
	printf("__LINE__: %d\n" "__FILE__: %s\n", __LINE__, __FILE__);
	printf("__LINE__: %d\n" "__FILE__: %s\n", __LINE__, __FILE__);
#line 20 "test_#line.c"
	puts("\t#============#");
	printf("__LINE__: %d\n" "__FILE__: %s\n", __LINE__, __FILE__);
	printf("__LINE__: %d\n" "__FILE__: %s\n", __LINE__, __FILE__);
#line LINE_NUM FILE_NAME
	puts("\t#============#");
	printf("__LINE__: %d\n" "__FILE__: %s\n", __LINE__, __FILE__);
	printf("__LINE__: %d\n" "__FILE__: %s\n", __LINE__, __FILE__);
	printf("__LINE__: %d\n" "__FILE__: %s\n", __LINE__, __FILE__);

	return (0);
}
