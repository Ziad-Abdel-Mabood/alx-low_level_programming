#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 * Return: character pointer to encoded string
 */

char *leet(char *s)
{
	int i = 0;
	int k = 0;
	char *str = s;
	char lowercase[6] = "aeotl";
	char uppercase[6] = "AEOTL";
	char eleet[6] = "43071";

	for (i = 0; *(str + i) != '\0'; i++)
	{
		for (k = 0; k < 6; k++)
		{
			if (*(str + i) == lowercase[k] || *(str + i) == uppercase[k])
			{
				*(str + i) = eleet[k];
			}
		}
	}
	return (str);
}
