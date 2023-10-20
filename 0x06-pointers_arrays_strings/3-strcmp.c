#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer to first string
 * @s2: pointer two second string
 * Return: the result of subtracting
 * the first different characters' ASCII values
 */
int _strcmp(char *s1, char *s2)
{
	int len = 0;
	int cmp = 0;

	for (; *(s1 + len) != '\0'; len++)
	{
		if (*(s1 + len) == *(s2 + len))
		{
			cmp = 0;
		}
		else
		{
			cmp = *(s1 + len) - *(s2 + len);
			break;
		}
	}
	return (cmp);
}
