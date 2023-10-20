#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string to change
 * Return: a character pointer that is the string in uppercase
 */
char *string_toupper(char *s)
{
	int i = 0;
	char *src = s;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		if (*(src + i) >= 97 && *(src + i) <= 122)
		{
			*(src + i) = *(src + i) - 32;
		}
	}
	return (src);
}
