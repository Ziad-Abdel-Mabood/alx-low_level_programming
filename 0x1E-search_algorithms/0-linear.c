#include "search_algos.h"

/**
 * linear_search -	searches for a value in an array of integers
 *			using linear search.
 * @array:		array to be searched.
 * @size:		size of the array.
 * @value:		value to be searched for.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;
	int box = array[index];

	/* check if variables are viable */
	if (array && size && value)
	{
		while (index < size)
		{
			/* print searched index */
			printf("Value checked array[%ld] = [%d]\n", index, box);

			if (box == value)	/* check value */
				return (index);		/* print index if found */

			index++;
			box = array[index];
		}
		return (-1);
	}
	else
		return (-1);
}
