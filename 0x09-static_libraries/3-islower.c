#include "main.h"
/**
 * _islower - checks if character is lowercase
 * @c: character to be checked
 * Return: 1 character is lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
