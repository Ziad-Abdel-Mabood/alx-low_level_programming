#include "main.h"

/**
 * main -	adds positive numbers.
 * @argc:	number of arguments passed.
 * @argv:	array of arguments.
 * Return:	Always 0.
 */
int main(int argc, char *argv[])
{
	int sum, i, j;

	if (argc <= 1)
		printf("0\n");
	for (i = 1; argv[i]; i++)
	{
		for (j = 0; argv[i][j]; j++)
			if (argv[i][j] < '0' || argv[i][j] > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argv[i]);
	}
	printf("%i\n", sum);
	return (0);
}
