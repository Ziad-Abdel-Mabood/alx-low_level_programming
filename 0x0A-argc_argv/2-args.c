#include "main.h"

/**
 * main -	prints all arguments it recieves.
 * @argc:	number of arguments printed.
 * @argv:	array of arguments.
 * Return:	Always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	(void)argc;

	while (argv[i])
		printf("%s\n", argv[i++]);
	return (0);
}
