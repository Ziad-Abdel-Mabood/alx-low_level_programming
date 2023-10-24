#include "main.h"

/**
 * _strspn -	gets the length of a prefix substring
 * @s:		string to be checked.
 * @accept:	bytes to check.
 * Return:	number of bytes.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int k;
	unsigned int counter = 0;

	for (i = 0; s[i] != 0; i++)
	{
		for (k = 0; accept[k] != 0; k++)
		{
			if (s[i] == accept[k])
			{
				counter++;
				break;
			}
		}
		if (accept[k] == 0)
			break;
		k = 0;
	}
	return (counter);
}
