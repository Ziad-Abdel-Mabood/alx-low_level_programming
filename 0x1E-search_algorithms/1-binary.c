#include "search_algos.h"

/**
 * binary_search -	searches for a value in a sorted array
 *					of integers using the Binary search algorithm.
 * @array:			pointer to the first element of the array to search in.
 * @size:			number of elements in array.
 * @value:			value to search for.
 * Return:			index where value is located,
 *					-1 if array is NULL or value is not in array.
*/
int binary_search(int *array, size_t size, int value)
{
	if (array && size && value)
	{
		size_t left = 0;
		size_t right = size - 1;
		size_t i = 0;

		while (left <= right)
		{
			size_t middle = (left + right) / 2;

			/* printing */
			printf("Searching in array: ");
			for (i = left; i < right; i++)
				printf("%i, ", array[i]);
			printf("%i\n", array[i]);

			/* checking and looping if not found */
			if (array[middle] < value)
				left = middle + 1;
			else if (array[middle] > value)
				right = middle - 1;
			else
				return (middle);
		}
	}
	return (-1);
}
