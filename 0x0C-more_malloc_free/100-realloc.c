#include "main.h"
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _realloc - reallocates a memory block using `malloc()` and `free()`
 * @ptr: pointer to the memory block to be reallocated
 * @old_size: size of old allocated memory block, pointed by `ptr`
 * @new_size: size of new allocated memory block (reallocated block)
 *
 * Return: On success, pointer to the new memory block
 *           OR `ptr` if `new_size == old_size`
 *         On failure OR if `new_size == 0`, NULL('\0')
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem_block;

	if (ptr == NULL)
	{
		mem_block = malloc(new_size);
		/* On failure, free the old memory block & return NULL */
		if (mem_block == NULL)
		{
			free(ptr);
			return (NULL);
		}
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	else
	{
		mem_block = malloc(new_size);
		/* On failure, free the old memory block & return NULL */
		if (mem_block == NULL)
		{
			free(ptr);
			return (NULL);
		}

		/*
		 * copy the `min(old_size, new_size)` bytes
		 *   from old block to new block
		 * SO: if `new_size > old_size`
		 *         the “extra” memory bytes should not be initialized
		 */
		if (new_size < old_size)
			_memcpy(mem_block, ptr, new_size);
		else
			_memcpy(mem_block, ptr, old_size);

		/* free the old memory block */
		free(ptr);
	}

	return (mem_block);
}

/**
 * _memcpy - copies memory area from 'src' to 'dest'.
 * @src: pointer to src memory area
 * @dest: pointer to dest memory area
 * @n: bytes to copies
 *
 * Return: pointer to the memory area 'dest'
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
