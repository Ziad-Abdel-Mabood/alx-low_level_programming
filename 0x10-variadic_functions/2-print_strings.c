#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings -	prints a string followd by a newline.
 * @separator:		strings to be printe between the strings.
 * @n:			number of strings passed to the function.
 * Return:		nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	if (n)
	{
		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			str = va_arg(args, char *);

			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);

			if (separator && i < n - 1)
				printf("%s", separator);
		}
		va_end(args);
	}
	printf("\n");
}
