#include "main.h"

/**
 * cap_string - capitalizes words in a string
 * @s: string to change
 * Return: a character pointer that is the string capitalized
 */
char *cap_string(char *s)
{
	int i = 0;
	int k = 0;
	char *src = s;
	char seperators[] = " ,;.!?\")({}\n	";

	for (i = 0; *(src + i) != '\0'; i++)
	{
		for (k = 0; seperators[k] != '\0'; k++)
		{
			if (*(src + i) == seperators[k])
			{
				i++;
				if (*(src + i) >= 97 && *(src + i) <= 122)
				{
					*(src + i) = *(src + i) - 32;
				}
			}
		}
	}
	return (src);
}
