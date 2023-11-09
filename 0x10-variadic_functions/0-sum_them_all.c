#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -	sums all parameters.
 * @n:			number of variables.
 * Return:		sum of parameters or zero if n == 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n)
	{
		va_list args;
		int sum = 0;
		unsigned int i;

		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			sum = sum + va_arg(args, int);
		}
		va_end(args);
		return (sum);
	}
	return (0);
}
