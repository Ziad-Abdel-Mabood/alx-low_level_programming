#inlcude "main.h"

/**
 * get_endianness -	checks the endianness.
 * Return:		0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned long int n = 1;

	if (*(char *)&n == 1)
		return (1);
	else if (*(char *)&n == 0)
		return (0);
}
