#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -	allocates memory using malloc.
 * @b:			number of bytes to allocate.
 * Return:		pointer to any type.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == 0)
	{
		exit(98);
	}
	return (ptr);
}
