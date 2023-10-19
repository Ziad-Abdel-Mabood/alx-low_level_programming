#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to reverse
 * Return: nothing.
 */
void rev_string(char *s)
{
	int len = 0;
	int l;
	char temp;

	for (; *(s + len) != 0;)
		len++;
	for (l = 0; l < (len / 2); l++)
	{
		temp = *(s + l);
		*(s + l) = *(s + len - l - 1);
		*(s + len - l - 1) = temp;
	}
}
