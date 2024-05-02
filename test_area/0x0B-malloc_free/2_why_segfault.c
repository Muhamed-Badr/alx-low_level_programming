#include <stdio.h>

/**
 * auto_alloc_strings - explain the special case of automatic allocation
 *
 * Description: if the same string used in multiple places within the program
 *                  such as(in `printf()` function, held by a pointer or any form
 *                  that Is used in just in a condition exactly string is used)
 *                  during the program runs the only one space is reserved to it
 *                  as read-only in memory
 *
 *              In another way:
 *              In C, string literals like `"cisfun"` are typically stored in a
 *                  read-only section of memory, often referred to as the "text"
 *                  or "code" segment. When you use the same string literal
 *                  in multiple places within your code, the compiler optimizes
 *                  this by storing only one instance of the string literal in memory.
 *                  All occurrences of that string literal in your code will then point
 *                  to the same memory location where the string is stored.
 *
 * Return: nothing.
 */
void cisfun(void)
{
    char *str = "cisfun", str2[] = "cisfun", *str3;
    /* char array[] = "cisfun"; */

    /* str = "cisfun"; */
    /* *str = 'a'; */
    /* *str2 = 'a'; */
    str3 = "cisfun";

    /* puts(str); */
    printf("hold address by `str` : %p -> contains: %s\n", str, str);
    printf("hold address by `str2`: %p -> contains: %s\n", str2, str2);
    printf("hold address by `str3`: %p -> contains: %s\n", str3, str3);
}


int main()
{
    char *p;

    cisfun();

    p = "cisfun";

    printf("hold address by `p`   : %p -> contains: %s\n", p, p);
    printf("address of \"%s\" 1st character: %p\n", "cisfun", /*(void *)*/"cisfun");

    return (0);
}
