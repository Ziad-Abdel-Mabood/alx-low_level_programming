#include "main.h"

/**
 * get_len -			return length of string
 * _print_rev_recursion -	prints a string in reverse
 * @s:				string to be printed
 * Return:			nothing.
 */

/*int get_len(char *s)
{
	int i = 0;

	if (*(s + i) != '\0')
		i++;
	get_len(s + 1);
	_putchar('0' + i);
	_putchar('\n');
	return (i);
}*/

void _print_rev_recursion(char *s)
{
	int len;

	len = 13;
	if (len < 0)
		return;
	else if (len >= 0)
	{
		len--;
		_putchar(s[len]);
		_print_rev_recursion(s);
	}
}

