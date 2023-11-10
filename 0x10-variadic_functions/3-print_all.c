#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>

void _char(va_list a);
void _int(va_list a);
void _float(va_list a);
void _str(va_list a);

/**
 * print_all -	prints anything.
 * @format:	type of argument passed to the function.
 * Return:	nothing.
 */
void print_all(const char *const format, ...)
{
	va_list args;
	int num_args = strlen(format), i = 0, j;

	ident_t identifiers[] = {
		{"c", _char},
		{"i", _int},
		{"f", _float},
		{"s", _str},
		{NULL, NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (identifiers[j].name)
		{
			if (format[i] == identifiers[j].name[0])
			{
				identifiers[j].f(args);
				if (i < num_args)
					printf(", ");
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

/**
 * _char -	prints a char accepted from main.
 * @a:		va_list passing the arguments to be printed.
 * Return:	nothing.
 */
void _char(va_list a)
{
	printf("%c", va_arg(a, int));
}

/**
 * _int -	prints an integer accepted from main.
 * @a:		va_list passing the arguments to be printed.
 * Return:	nothing.
 */
void _int(va_list a)
{
	printf("%i", va_arg(a, int));
}

/**
 * _float -	prints a float accepted from main.
 * @a:		va_list passing the arguments to be printed.
 * Return:	nothing.
 */
void _float(va_list a)
{
	printf("%f", va_arg(a, double));
}

/**
 * _str -	prints a string accepted from main.
 * @a:		va_list passing the arguments to be printed.
 * Return:	nothing.
 */
void _str(va_list a)
{
	char *str = va_arg(a, char *);

	switch ((int)(!str))
	case 1:
		str = "(nil)";
	printf("%s", str);
}
