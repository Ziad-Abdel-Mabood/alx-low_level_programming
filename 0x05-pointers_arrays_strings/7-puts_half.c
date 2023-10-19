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
	int n = (len - 1) / 2;

	for (len = 0; str[len] != 0;)
		len++;
	for (i = 0; i >= n && i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
