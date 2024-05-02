#include <stdio.h>

/**
 * segf - Let's segfault \o/
 *
 * Description: segfault occurs, because `"cisfun"` allocated in memory as read-only in `.text` segment
 *                  and `str` is a pointer point to the 1st char in `"cisfun"` which it's `'c'`
 *              Other than if we do this `char array[] = "cisfun";` it wont be there a segfault,
 *              because `array` takes a copy of `"cisfun"`
 *
 * Return: nothing.
 */
void segf(void)
{
    char *str, *str2;
    // char array[] = "cisfun";

    str = "cisfun";
    *str = 'a';

    // *array  = 'a';

    puts(str);
    // puts(array);
}


int main()
{

    segf();


    return (0);
}
