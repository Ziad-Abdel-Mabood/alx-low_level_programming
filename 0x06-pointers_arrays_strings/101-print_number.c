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
	if (n > 999999999)
	{
		temp = n % 10000000000;
		_putchar('0' + (temp / 1000000000));
	}
	if (n > 99999999)
	{
		temp = n % 1000000000;
		_putchar('0' + (temp / 100000000));
	}
	if (n > 9999999)
	{
		temp = n % 100000000;
		_putchar('0' + (temp / 10000000));
	}
	if (n > 999999)
	{
		temp = n % 10000000;
		_putchar('0' + (temp / 1000000));
	}
	if (n > 99999)
	{
		temp = n % 1000000;
		_putchar('0' + (temp / 100000));
	}
	if (n > 9999)
	{
		temp = n % 100000;
		_putchar('0' + (temp / 10000));
	}
	if (n > 999)
	{
		temp = n % 10000;
		_putchar('0' + (temp / 1000));
	}
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
