#include "main.h"
#include <stdlib.h>
/**
 * str_concat -	concatenates two strings
 * @s1:		first string.
 * @s2:		second string.
 * Return:	pointer to two strings in a new memory.
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int len1, len2, bytesize;
	int rlen = 0;
	int i = 0;

	if (s1 == NULL)
		len1 = 0;
	else
		for (len1 = 0; *(s1 + len1) != '\0'; len1++)
			;
	if (s2 == NULL)
		len2 = 0;
	else
		for (len2 = 0; *(s2 + len2) != '\0'; len2++)
			;
	bytesize = sizeof(char) * (len1 + len2);
	if (bytesize == 0)
	{
		result = '\0';
		return (result);
	}
	result = malloc(bytesize);
	if (result == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		result[rlen] = s1[i];
		rlen++;
	}
	i = 0;
	for (i = 0; i < len2; i++)
	{
		result[rlen] = s2[i];
		rlen++;
	}

	if (result[rlen] != '\0')
		result[rlen] = '\0';

	return (result);
}

