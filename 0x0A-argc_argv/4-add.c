#include "main.h"

/**
 * main -	adds positive numbers.
 * @argc:	number of arguments passed.
 * @argv:	array of arguments.
 * Return:	Always 0.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(argv[argc]);
	}
	printf("%i\n", sum);
	return (0);
}
