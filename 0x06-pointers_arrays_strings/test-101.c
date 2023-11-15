#include "main.h"
/**
 * print_number - prints an integer using only _putchar
 * @n: number to be printed
 * Return: nothing
 */

void print_number(int n)
{
	int temp;
	int i;
	int divisor = 1000000000;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	for (i = 0; i < 10; i++)
	{
		if (n >= (divisor /10))
		{
			temp = n % divisor;
			divisor = divisor / 10;
			_putchar('0' + (temp / divisor));
		}
	}
	_putchar('0' + (n % 10));
}
