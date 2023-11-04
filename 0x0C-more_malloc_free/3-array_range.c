#include "main.h"
#include <stdlib.h>

/**
 * array_range -	creates an array of integers.
 * @min:		smallest integer.
 * @max:		largest integer.
 * Return:		pointer to newly created array.
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, content;

	content = min;
	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= (max - min + 1); i++)
	{
		arr[i] = content;
		content++;
	}
	return (arr);
}
