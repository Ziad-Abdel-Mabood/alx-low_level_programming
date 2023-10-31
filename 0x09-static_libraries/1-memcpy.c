#include "main.h"
/**
 * _memcpy -	copies n bytes from memeory area src to memory area dest
 * @dest:	destination to copy elements
 * @src:	source of data to copy
 * @n:		number of bytes to copy
 * Return:	character pointer to copied elements
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
