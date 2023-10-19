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
	char *temp_arr = s;

	for (; *(s + len) != 0;)
		len ++;
	_putchar(len);
	_putchar('\n');
	len--;
	for (l = 0; l < (len / 2); l++)
	{
		*(temp_arr + l) = *(s + (len - l));
		_putchar(*(temp_arr + l));
		_putchar('0' + l);
		_putchar('0' + (len - l));
		_putchar('\n');
	}
/*	len = 0;
	l = 0;
	for (; s[len] != 0; len++)
	{
		*(s + len) = *(temp_arr + l);
		l++;
	}
*/
}
