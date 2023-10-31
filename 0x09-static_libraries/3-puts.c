#include "main.h"
/**
 * _puts - print a string
 * @str: string to print
 * Return: nothing.
 */
void _puts(char *str)
{
	int len = 0;

	for (; *(str + len) != 0; len++)
	{
		_putchar(*(str + len));
	}
	_putchar('\n');
}
