#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -	print the sum of two diagonals of a square matrix
 * @a:			array of arrays.
 * @size:		size of arrays.
 * Return:		nothing.
 */

void print_diagsums(int *a, int size)
{
	int *matrix = a;
	int i = 0;
	int k = 0;
	long sum1 = 0;
	long sum2 = 0;

	for (i = 0;i < size; i++)
	{
		sum1 = sum1 + a[i][k];
		k++;
	}
	i = 0;
	for (;i < size; i++)
	{
		sum2 = sum2 + a[i][k];
		k--;
	}
	printf("%ld, %ld\n", sum1, sum2);
}
