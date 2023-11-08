#include "function_pointers.h"
/**
 * int_index -	searches for an integer.
 * @array:	array of integers to search in.
 * @size:	size of the array.
 * @cmp:	pointer to function to be used to compare values.
 * Return:	index of the first element that matches with compare
 *		-1 at failure.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; cmp(array[i]) == 0 && i < size; i++)
		;

	if (cmp(array[i]) == 0 && i == size)
		return (-1);

	return (i);
}
