#include "main.h"

/**
 * _strncpy - copies a string into another with limit
 * @dest: string that will be at the beginning
 * @src: string that will be at the end
 * @n: bytes to copy
 * Return: character pointer to target string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len_src = 0;
	int len_dest = 0;

	for (len_src = 0; len_src < n && *(src + len_src) != '\0';)
	{
		*(dest + len_dest) = *(src + len_src);
		len_dest++;
		len_src++;
	}
	for (; len_dest < n; len_dest++)
		*(dest + len_dest) = '\0';
	return (dest);
}
