#include "holberton.h"
#include <stdlib.h>


/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of
 *               integers, initalized to 0
 *
 * @width: Width with 2 dimensional array
 * @height: Height with 2 dimensional array
 *
 * Return: Pointer to the 2 dimensional array of integers.
 *          NULL if width or height is 0 or negative, or the function fails
 */
int **alloc_grid(int width, int height)
{
	int **M = NULL;
	int i, r;

	if (width <= 0 || height <= 0)
		return (NULL);

	M = malloc(sizeof(int *) * height);

	if (!M)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		M[i] = malloc(sizeof(int) * width);

		if (M[i] == NULL)
		{
			for (; i >= 0; i--)
				free(M[i]);
			free(M);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (r = 0; r < width; r++)
		{
			M[i][r] = 0;
		}

	}
	return (M);
}
