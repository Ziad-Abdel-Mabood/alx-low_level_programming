#include "main.h"

/**
 * reverse_array - reverse an array of integers
 * @a: array to be reversed
 * @n: number of array elements
 * return: nothing
 */
void reverse_array(int *a, int n)
{
	int temp = 0;
	int i = 0;

	for (; i < (n / 2); i++)
	{
		temp = *(a + i);
		*(a + i) = *(a + (n-i));
		*(a + (n - i)) = temp;
	}
}
