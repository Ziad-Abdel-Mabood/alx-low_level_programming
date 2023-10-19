#include "main.h"

/**
 * _strcat - concatecate two strings
 * @dest: string that will be at the beginning
 * @src: string that will be at the end
 * Return: character pointer to both strings together
 */
char *_strcat(char *dest, char *src)
{
	int len_src;
	int len_dest;
/*
 *	char *result = *dest;
*/
	for (len_dest = 0; *(dest + len_dest) != '\0'; len_dest++)
		;
	for (len_src = 0; *(src + len_src) != '\0'; len_src++)
		*(dest + len_dest + len_src) = *(src + len_src);
	return (dest);
}
