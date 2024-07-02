#include <stdio.h>

/*
 *>The `#define` directive used to define (Obj-like and Fun-like) macros
 *   1. `#define MACRO_NAME [value]`                         -> obj-like macro
 *   2. `#define MACRO_NAME(arg1, ...) [code to expand to]`  -> fun-like macro
 *   whenever MACRO_NAME shows up in the file, it will be replaced
 *    by [value] (obj-like) OR by [code to expand to] (fun-like).
 *
 *>The `#undef` directive used to undefine (Obj-like and Fun-like) macros
 *   1. `#undef MACRO_NAME` 
 */

#define FOO_OBJ 512
#define FOO_FUN(x) ((x) * (x))

int a1 = FOO_OBJ;
int b1 = FOO_FUN(2);

#undef FOO_OBJ
#undef FOO_FUN

#define FOO_OBJ 1024
#define FOO_FUN(x) ((x) * (x) * (x))

int a2 = FOO_OBJ;
int b2 = FOO_FUN(2);

int main(void)
{
	printf("a1: %d\n" "b1: %d\n" "a2: %d\n" "b2: %d\n", a1, b1, a2, b2);

	printf("FOO_OBJ: %d\n" "FOO_FUN(2): %d\n", FOO_OBJ, FOO_FUN(2));

	return (0);
}
