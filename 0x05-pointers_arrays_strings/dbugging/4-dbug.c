#include "main.h"
#include <stdio.h>
/**
 * print_rev - print a string in reverse
 * @s: string to print
 * Return: nothing.
 */
void print_rev(char *s)
{
	int len = 0;

	for (; *(s + len) != 0; )
	{
		len++;
	}
	len--;
	for (; len >= 0;)
	{
		printf("%c", *(s + len));
		printf(" : %i, ", len);
		len--;
	}
	_putchar('\n');
}
