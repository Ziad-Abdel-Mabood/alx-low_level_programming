#include "main.h"
#include <stdlib.h>
/**
 * _memzero -	fills memory with zeros
 * @p:		pointer for the start
 * @n:		bytes to use.
 * Return:	pointer to start of memory.
 */
char *_memzero(char *p, unsigned int n)
{
	char *ptr = p;
	int i;

	for (i = 0; i <= n; i++)
		ptr[i] = 0;

	return (ptr);
}

/**
 * _calloc -	allocates memory for an array using malloc.
 * @nmemb:	number of array elements.
 * @size:	size of each element.
 * Return:	pointer to allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	 void *call;

	if (size == 0 || nmemb == 0)
		return (NULL);

	 call = malloc(size * nmemb);

	if (call == 0)
		return (NULL);

	_memzero(call, (nmemb * size));

	return (call);
}
