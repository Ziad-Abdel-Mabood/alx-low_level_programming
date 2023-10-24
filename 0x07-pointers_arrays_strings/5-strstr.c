#include "main.h"
#include <stddef.h>

/**
 * _strstr -	locates a substring
 * @haystack:	string to check.
 * @needle:	string to look for.
 * Return:	pointer to the beginning of the located substring.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int l = 0;
	int k = 0;
	char *match;

	for (; haystack[i] != 0; i++)
	{
		l = i;
		for (; needle[k] != 0;)
		{
			if (haystack[l] != needle[k])
				break;
			else if (haystack[l] == needle[k])
				l++;
			k++;
		}
		if (needle[k] == 0)
		{
			match = &haystack[i];
			break;
		}
		k = 0;
	}
	if (haystack[i] == 0)
		match = NULL;
	return (match);
}
