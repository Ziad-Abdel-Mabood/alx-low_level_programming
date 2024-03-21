#include "main.h"

/**
 * key_index -	gives the index of a key.
 * @key:	the key for the value.
 * @size:	size of the array.
 * Return:	index for the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb(key);
	return (index);
}
