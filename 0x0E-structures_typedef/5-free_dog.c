#include "dog.h"

/**
 * free_dog - frees an instance of type struct dog.
 * @d: A pointer to the struct dog instance to be freed.
 *
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);

		if (d->owner != NULL)
			free(d->owner);

		free(d);
	}
}
