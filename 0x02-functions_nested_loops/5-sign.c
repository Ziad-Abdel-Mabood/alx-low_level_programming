#include "main.h"
/**
 * print_sign - print sign of a number
 * @c: character to be checked
 * Return: 1 character is positive, 0 if zero, -1 if negative
 */
int print_sign(int c)
{
	if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
