#include "main.h"

/**
 * print_square - print a square
 * @size: dimensions of square
 * Return: void
 */

void print_square(int size)
{
	int h;
	int w;

	if (size > 0)
	{
		for (h = size; h > 0; h--)
		{
			for (w = size; w > 0; w--)
				_putchar('#');
			_putchar('\n');
		}
	} else
		_putchar('\n');
}

