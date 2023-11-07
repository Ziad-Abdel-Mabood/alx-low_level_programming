#include "dog.h"
#include <stdlib.h>

/**
 * free_dog -	frees struct dog.
 * @d:		pointer to struct dog to be freed.
 * Return:	nothing.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if ((*d).name)
			free((*d).name);
		if ((*d).owner)
			free((*d).owner);
		free((d));
	}
}
