#include "main.h"
#include <stdio.h>

void print_number(int n)
{
	if (n < 0)
	{
		n = n * -1;
	/*	_putchar('-');
	*/}
	printf("%i \n", n); 
}
