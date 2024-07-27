#include "dog.h"
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - Creates a new instance of type struct dog.
 * @name: A pointer to a char array that holds the dog's name.
 * @age: A variable that holds the dog's age.
 * @owner: A pointer to a char array that holds the dog owner's name.
 *
 * Return: On success, pointer to a new instance of type struct dog.
 *         On failure, NULL('\0').
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	if (name != NULL)
	{
		dog->name = malloc(_strlen(name) + 1);
		if(dog->name == NULL)
		{
			free(dog);
			return (NULL);
		}
		_strcpy(dog->name, name);
	}
	else
		dog->name = NULL;

	dog->age = age;

	if (owner != NULL)
	{
		dog->owner = malloc(_strlen(owner) + 1);
		if(dog->owner== NULL)
		{
			free(dog->name);
			free(dog);
			return (NULL);
		}
		_strcpy(dog->owner, owner);
	}
	else
		dog->owner = NULL;

	return (dog);
}

/**
 * _strlen - returns the length of a string
 * @s: pointer to the passed string
 *
 * Return: length of the passed string
 */
int _strlen(char *s)
{
	int length = 0;

	/* s[length] == *(s + length) */

	while (s[length])
		length++;

	return (length);
}

/**
 * _strcpy - copies the string pointed to by 'src', including
 * the terminating null byte (\0), to the buffer pointed to by 'dest'.
 * @src: pointer to the source string
 * @dest: pointer to the destination string
 *
 * Return: pointer to 'dest'
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}
