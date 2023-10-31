#include "main.h"

/**
 * _isdigit - check if character is upper case
 * @c: character to be checked
 *
 * Return: 1 if a digit (success), 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
