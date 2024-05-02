#include <stdio.h>

/**
 * cisfun - lets have some fun
 * @n1: number of projects
 * @n2: number of tasks
 *
 * Description: practice on how automatic memory allocation is done
 *
 * Return: nothing.
 */
void cisfun(unsigned int n1, unsigned int n2)
{
    int n;
    char c;
    int *ptr;
    char array[3];
    puts("\t\tcisfun");
    printf("&n1      : %p\n&n2      : %p\n&n       : %p\n&c       : %p\n", &n1, &n2, &n, &c);
    printf("ptr      : %p\n*ptr     : %d\n&ptr     : %p\n&array   : %p\narray    : %p\n", ptr, *ptr, &ptr, &array, array);
    printf("&array[0]: %p\n&array[1]: %p\n&array[2]: %p\n", &array[0], &array[1], &array[2]);
}


int main()
{
    size_t n = 5;

    cisfun(2, 3);

    printf("\t\tmain\n&n       : %p\n", &n);

    //printf("size of `size_t`: %lu\n", sizeof(size_t));
    //printf("the value of `size_t` var(n): %ld\n", n);

    return (0);
}
