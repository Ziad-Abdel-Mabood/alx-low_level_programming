#include "dog.h"
#include <stdlib.h>

/**
 * _strlen -	gets the length of string.
 * @str:	the string to check for length.
 * Return:	length of str.
 */
int _strlen(const char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * _strcopy -	copies string form src to dest.
 * @src:	string to copy.
 * @dest:	copied string.
 * Return:	pointer to copied string.
 */
char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog -	creates a new dog.
 * @name:	name of the dog.
 * @age:	age of the dog.
 * @owner:	name of the dog owner.
 * Return:	struct pointer to created dog or NULL at failure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pupper;

	if (!name || age < 0 || !owner)
		return (NULL);

	pupper = malloc(sizeof(dog_t));
	if (pupper == NULL)
		return (NULL);

	(*pupper).name = malloc(_strlen(name) + 1);
	if ((*pupper).name == NULL)
	{
		free(pupper);
		return (NULL);
	}

	(*pupper).owner = malloc(_strlen(owner) + 1);
	if ((*pupper).owner == NULL)
	{
		free((*pupper).name);
		free(pupper);
		return (NULL);
	}

	(*pupper).name = _strcopy((*pupper).name, name);
	(*pupper).age = age;
	(*pupper).owner = _strcopy((*pupper).owner, owner);

	return (pupper);
}
