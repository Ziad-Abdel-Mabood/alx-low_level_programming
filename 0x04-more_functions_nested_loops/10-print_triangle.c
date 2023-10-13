#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * Return: void
 */

void print_triangle(int size)
{
	int h = 1;
	int b = h;
	int space = size - b;

	if (size > 0)
	{
		for (h = 1; h <= size; h++)
		{
			for (space = size - h; space > 0; space--)
				_putchar('.');
			for (b = h; b > 0 ; b--)
				_putchar('#');
			_putchar('\n');
		}
	} else
		_putchar('\n');
}
