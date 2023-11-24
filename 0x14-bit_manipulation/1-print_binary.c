#include "main.h"

/**
 * print_binary -	prinst binary representation of a number.
 * @n:			number to be printed.
 * Return:		void.
 */
void print_binary(unsigned long int n)
{
	int digit = sizeof(n) * 8;
	int done = 0;

	while (digit)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
			_putchar('0');
	}
	if (!printed)
		_putchar('0');
}
