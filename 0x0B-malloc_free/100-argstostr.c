#include "main.h"
#include <string.h>

/**
 * argstostr -	concatenates all the arguments of the program.
 * @ac:		argc from the program: number of arguments.
 * @av:		argv pointer to array of arguments.
 * Return:	pointer to a new string on success.
 *		NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	int i;
	char *str;

	if (ac <= 1 || av == NULL)
		return (NULL);
	else
	{

		for (i = 1; i <= ac; i++)
		{

