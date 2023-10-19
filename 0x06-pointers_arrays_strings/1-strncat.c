#include "main.h"

/**
 * _strncat - concatecate two strings with limit
 * @dest: string that will be at the beginning
 * @src: string that will be at the end
 * @n: bytes to concatecate
 * Return: character pointer to both strings together
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_src;
	int len_dest;

	for (len_dest = 0; *(dest + len_dest) != '\0'; len_dest++)
		;
	for (len_src = 0; len_src < n && *(src + len_src) != '\0'; len_src++)
		*(dest + len_dest + len_src) = *(src + len_src);
	return (dest);
}
