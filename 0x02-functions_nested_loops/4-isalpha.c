#include "main.h"
/**
 * _isalpha - checks if character is alphabetical
 * @c: character to be checked
 * Return: 1 character is lowercase
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	return (0);
}
