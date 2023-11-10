#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

/**
 * ident -	format identifiers for printing.
 * @name:	the character used for identifying the format.
 * @f:		function to be called to print the argument.
 */
typedef struct ident
{
	char *name;
	void (*f)(va_list a);
} ident_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif /* #infndef VARIADIC_FUNCTIONS_H */
