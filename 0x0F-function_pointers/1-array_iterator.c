#include "function_pointers.h"

/**
 * array_iterator -	executes a function on each element of an array
 * @array:		array to use.
 * @size:		size of the array.
 * @action:		function to be executed.
 * Return:		nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action && size)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
