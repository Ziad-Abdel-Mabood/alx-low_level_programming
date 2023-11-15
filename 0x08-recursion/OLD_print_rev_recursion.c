#include "main.h"

/**
 * _print_rev_recursion -	prints a string in reverse.
 * @s:				string to be printed.
 * Return:			nothing.
 */

void _print_rev_recursion(char *s)
{
	int last = 0;
	char *ptr = &s[last];

/*
 *	reaching the end of the string.
*/
	if (s[last] != '\0')
		last++;

/*
 *	terminate when at the start of the string
 */
	if (*ptr == s[0])
		return;


/*
 *	print char
 */
	_putchar(*ptr);
	_print_rev_recursion(&s[last - 1]);
}
