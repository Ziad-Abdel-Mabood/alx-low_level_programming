#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: string to print
 * Return: nothing.
 */
void print_rev(char *s)
{
	int len;

	*(s + len) = 0;
	for (; len >= 0; len--)
	{
		_putchar(*(str + len));
	}
	_putchar('\n');
}
