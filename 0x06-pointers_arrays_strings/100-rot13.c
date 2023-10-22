#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @s: string to be encoded
 * Return: character pointer to encoded string
 */

char *rot13(char *s)
{
	int i = 0;
	int k = 0;
	char *str = s;
	char set1[27] = "ABCDEFGHIJKLMabcdefghijklm";
	char set2[27] = "NOPQRSTUVWXYZnopqrstuvwxyz";

	for (i = 0; *(str + i) != '\0'; i++)
	{
		for (k = 0; k < 27; k++)
		{
			if (*(str + i) == set1[k])
				*(str + i) = set2[k];
			else if (*(str + i) == set2[k])
				*(str + i) == set1[k];
		}
	}
	return (str);
}
