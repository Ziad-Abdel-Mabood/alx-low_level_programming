#include "main.h"

/**
 * main -	multiplies two numbers.
 * @argc:	number of arguments.
 * @argv:	array of arguments passed.
 * Return:	0 on Success, 1 on failure.
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		printf("%i\n", (a * b));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
