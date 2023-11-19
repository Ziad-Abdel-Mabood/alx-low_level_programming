#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates space for a pointer to
 *		a 2 dimensional array of integers
 * @width:      width of the grid; number of arrays in the array.
 * @height:     height of the grid; size of each array member.
 * Return:      pointer to a 2 dimensional array of int.
*/
int **alloc_grid(int width, int height)
{
	int **ptr, i, j;

	ptr = malloc(sizeof(*ptr) * height);

	if (width <= 0 || height <= 0 || ptr == 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(**ptr) * width);
		if (ptr[i] == 0)
		{
			while (i--)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}

	return (ptr);
}
