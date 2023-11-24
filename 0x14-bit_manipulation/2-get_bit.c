#include "main.h"

/**
 * get_bit -	returns the value of a bit at a given index.
 * @n:		binary number given.
 * @index:	index at which desired bit is stored, starting from 0.
 * Return:	value of the bit at the index at success.
 *		-1 at failure.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
