#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: first integer to be swapped
 * @b: second integer to be swapped
 * returns nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = a;
	*a = b;
	*b = temp;
}
