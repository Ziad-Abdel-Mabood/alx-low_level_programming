#include "main.h"
#include <stddef.h>

/**
 * _strpbrk -	searches a string for any of a set of bytes
 * @s:		string to check
 * @accept:	bytes to compare with
 * Return:	pointer to the byte in s that matches one
 *		of the bytes in accept, or NULL if no such
 *		byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int k;
	char *match;

	for (i = 0; s[i] != 0; i++)
	{
		for (k = 0; accept[k] != 0; k++)
		{
			if (s[i] == accept[k])
			{
				match = &s[i];
				break;
			}
		}
		if (s[i] == accept[k])
		{
			break;
		}
		k = 0;
	}
	if (s[i] == 0 && s[i] != accept[k])
		match = NULL;
	return (match);
}
