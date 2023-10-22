#include "main.h"
/**
 * print_number - prints an integer using only _putchar
 * @n: number to be printed
 * Return: nothing
 */

void print_number(int n)
{
	int temp;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	if (n > 999)
		_putchar('0' + (n / 1000));
	if (n > 99)
	{
		temp = n % 1000;
		_putchar('0' + (temp / 100));
	}
	if (n > 9)
	{
		temp = n % 100;
		_putchar('0' + (temp / 10));
	}
	_putchar('0' + (n % 10));
}
