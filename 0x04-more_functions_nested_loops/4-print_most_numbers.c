#include "main.h"

/**
 * print_most_numbers - print all digits except 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int n = 0;

	if (n != 2 && n != 4)
	{
		for (; n < 10; n++)
		{
			_putchar('0' + n);
		}
	}
	_putchar('\n');
}
