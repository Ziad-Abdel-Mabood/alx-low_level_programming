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
	unsigned int end = size - 1;
	unsigned int middle = end / 2;
	int result = -1;
	unsigned int i = 0;

	if (array)
	{
		if (size == 0)		/*value is not in array*/
			return (-1);

		printf("Searching in array: ");
		for (i = 0; i < size - 1; i++)
			printf("%i, ", array[i]);
		printf("%i\n", array[size - 1]);

		if (result == -1)
		{
			if (array[middle] == value)
				return (array[middle]);
			else if (array[middle] > value)
				result = binary_search(array, middle, value);
			else
				result = binary_search(array + middle + 1, end - middle, value);
		}
	}

	return (result);
}
