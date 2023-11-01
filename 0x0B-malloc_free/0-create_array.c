#include "main.h"
#include <stdlib.h>

/**
 * create_array -	creates an array of chars and initializes
 *			it with a specific char.
 * @size:		size of the array.
 * @c:			character that initializes the array.
 * Return:		a character pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size <= 0)
		return (NULL);
	str = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
