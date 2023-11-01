#include "main.h"
#include <stdlib.h>

/**
 * _strdup -	copies a string into a newly allocated space.
 * @str:	string to be copied.
 * Return:	a pointer to copied string.
 */

char *_strdup(char *str)
{
	char *copy;
	int i;
	int len;

	if (str == NULL)
		return (NULL);
	for (len = 0; *(str + len) != '\n'; len++)
		;

	copy = malloc(sizeof(char) * len);

	for (i = 0; i <= len; i++)
		copy[i] = str[i];
	return (copy);
}
