#include "main.h"
/**
 * _memset - fills first 'n' bytes of the memory area pointed to by s
 * 	     with constant byte 'b'
 * @s: pointer to memory
 * @b: byte to fill memory
 * @n: number of bytes to fill
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		 s[i] = b;
	}
	return (s);
}
