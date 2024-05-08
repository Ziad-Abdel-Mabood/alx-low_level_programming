#include "search_algos.h"

/**
 * linear_search -	searches for a value in an array
 *					of integers using the Linear Searh Algorithm.
 * @array:			pointer to the first element of the array to search in.
 * @size:			number of elements in array.
 * @value:			value to search for.
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	if (array)
	{
		for (; i < size; i++)
		{
			printf("Value checked array[%i] = [%i]\n", i, array[i]);

			/*if found*/
			if (array[i] == value)
				return (i);
		}
	}

	/*if not found or array is NULL*/
	i = -1;
	return (i);
}
