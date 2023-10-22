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
	char set1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char set2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; *(str + i) != '\0'; i++)
	{
		for (k = 0; set1[k] != '\0'; k++)
		{
			if (*(str + i) == set1[k])
			{
				*(str + i) = set2[k];
				break;
			}
		}
		k = 0;
	}
	return (str);
}
