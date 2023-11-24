#include "main.h"

/**
 * set_bit -	sets the value of a bit to 1 at a given index.
 * @n:		binary number.
 * @index:	index of desired change.
 * Return:	1 at success.
 *		-1 at failure.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (!!(*n |= 1L << index));
}
