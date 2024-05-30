#include "main.h"

/**
 * malloc_checked - allocates memory using `malloc()`.
 * @b: the size of allocated block
 *
 * Description: this function allocates a memory block of size (b)
 *     if `malloc()` fails, the `malloc_checked()` will cause a normal
 *     process termination with a status value of '98' (execute `exit(98);`)
 *
 * Return: pointer to the allocated memory block
 */
void *malloc_checked(unsigned int b)
{
	void *mem_block = malloc(b);
	if(mem_block == NULL)
		exit(98);
	return (mem_block);
}
