#include "dog.h"

/**
 * print_dog - Print an instance of a type struct dog
 * @d: A pointer to the struct dog instance to be printed.
 *
 * Return: Nothing (void).
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			puts("Name: (nil)");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			puts("Owner: (nil)");
		else
			printf("Owner: %s\n", d->owner);
	}
}
