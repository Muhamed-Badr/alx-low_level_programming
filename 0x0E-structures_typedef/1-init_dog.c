#include "dog.h"

/**
 * init_dog - Initializes an instance of a type struct dog
 *             with the provided values.
 * @d: A pointer to the struct dog instance to be initialized.
 * @name: A pointer to a char array that holds the dog's name.
 * @age: A variable that holds the dog's age.
 * @owner: A pointer to a char array that holds the dog owner's name.
 *
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;

		/*
		 * (*d).name = name;
		 * (*d).age = age;
		 * (*d).owner = owner;
		 */
	}
}
