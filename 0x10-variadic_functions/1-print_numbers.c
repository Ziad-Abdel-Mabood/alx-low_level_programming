#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers -	prints numbers, followed by new line.
 * @separator:		string to be printed between numbers.
 * @n:			number of integers to be passed to the function.
 * Return:		nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	if (n)
	{
		for (i = 0; i < n; i++)
		{
			printf("%i", va_arg(args, int));
			if (separator)
				printf("%s", separator);
		}
		printf("\n");
		va_end(args);
	}
}
