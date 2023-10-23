#include "main.h"
/**
 * _strchr -	locates a character in a string.
 * @s:		pointer to string.
 * @c:		character to locate.
 * Return:	pointer to the first occurrence of the character c
 *		in the string s.
 */

char *_strchr(char *s, char c)
{
	int i;
	char *loc;

	for (i = 0; *(s + i) != 0; i++)
	{
		if (*(s + i) == c)
		{
			loc = &*(s + i);
			break;
		}
	}
	if (*(s + i) == 0)
		loc = &*(s + i);
	return (loc);
}
