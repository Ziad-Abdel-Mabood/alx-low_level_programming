#include "function_pointers.h"

/**
 * print_name -	prints a name.
 * @name:	string that contains the name.
 * @f:		pointer to a function that accepts
 *		a character pointer and returns nothing.
 * Return:	nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if(f && name)
		f(name);
}
