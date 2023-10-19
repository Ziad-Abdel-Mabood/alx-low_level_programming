#include "main.h"
/**
 * puts_half - print second half of the string
 * @str: string to print
 * Return: nothing
 */
void puts_half(char *str)
{
	int len;
	int i;

	for (len = 0; str[len] != 0;)
		len++;
	for (i = 0; i >= ((len - 1) / 2) && i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
