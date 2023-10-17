#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: string to print
 * Return: nothing.
 */
void print_rev(char *s)
{
	int len = 0;

	for (; *(s + len) != 0;)
		len++;
	for (; len >= 0; len--)
	{
		_putchar(*(s + len));
	}
	_putchar('\n');
}
