#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * generate a random number
 * print and describe the last digit
 */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int l_d;
	/*last digit*/
	n % 10 == l_d;
	if (l_d == 0)
		printf("Last digit of %i is 0 and is 0\n", n);
	else if (l_d > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, l_d);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, l_d);
	return (0);
}
