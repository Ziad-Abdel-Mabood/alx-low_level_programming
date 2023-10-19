#include "main.h"

/**
 * _strcpy - copy a string
 * @src: pointer to string to be copied
 * @dest: pointer to compied string
 * Return: a character pointer
 */
char *_strcpy(char *dest, char *src)
{
	char *buffer = dest;
	int i;
	int len;

	for (len = 0; *(src + len) != '\0'; len++)
		;
	for (i = 0; i <= len; i++)
		*(dest + i) = *(src + i);
	return (buffer);
}
