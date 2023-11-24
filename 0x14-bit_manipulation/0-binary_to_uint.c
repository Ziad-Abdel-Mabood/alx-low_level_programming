#include "main.h"

/**
 * binary_to_uint -	converts a binary number to an unsigned int.
 * @b:			pointer to string of 0 and 1 chars.
 * Return:		converted number at success.
 *			0 at failure.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;

	result = 0;
	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		result = result * 2 + (*b++ - '0');
	}
	return (result);
}
