#include "dog.h"
#include <stdlib.h>



/**
 * _strlen - length of a string
 * @s: String to measured
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}

/**
 * _strcopy - Copies a string
 * @d: String copied
 * @s: String from which to copy
 *
 * Return: Pointer b
 */
char *_strcopy(char *d, char *s)
{
	int i = 0;

	for (i = 0; s[i]; i++)
		d[i] = s[i];

	d[i] = '\0';

	return (d);
}

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: New struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);

	n_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}

	n_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}

	n_dog->name = _strcopy(n_dog->name, name);
	n_dog->age = age;
	n_dog->owner = _strcopy(n_dog->owner, owner);

	return (n_dog);
}
