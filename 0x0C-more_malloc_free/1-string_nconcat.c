#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat -	concatenates two strings.
 * @s1:			first string.
 * @s2:			second string.
 * @n:			number of bytes of string 2 to be concatenated.
 * Return:		pointer to newly allocated space containing
 *			two strings.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *kitty;
	unsigned int i, k, s2len;

	if (s1 = NULL)
		s1 = "";
/*
 * getting length of string 2, and limiting n to it
 * so that we don't get extra unneeded bytes.
*/
	for (s2len = 0; s2[s2len] != 0; s2len++)
		;
	if (n > s2len)
		n = s2len;
/*
 * allocating memory for the two strings.
*/
	kitty = malloc(sizeof(s1) + (sizeof(char) * n) + 1);
	if (kitty == 0)
		return(0);
	else
	{
/*
 * copying strings.
*/
		for (i = 0; s1[i] != 0; i++)
			kitty[i] = s1[i];
		for (k = 0; k < n; k++)
		{
			kitty[i] = s2[k];
			i++;
		}
/*
 * null terminating the string.
*/
		kitty[i] = 0;
		return (kitty);
	}
}
