#include "main.h"

/**
 * main -	prints the number of arguments passed into it.
 * @argc:	number of arguments to file.
 * @argv:	array of arguments.
 * Return:	always 0.
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%i\n", (argc - 1));
	return (0);
}
