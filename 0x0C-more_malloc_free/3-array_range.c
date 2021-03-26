#include "holberton.h"
#include <stdlib.h>


/**
 * array_range - Creates an array of integers ordered
 *               from min to max.
 * @min: First value of the array
 * @max: Last value of the array
 *
 * Return: Pointer to the newly created array
 *      NULL if min > max or if malloc fails
 *
 */
int *array_range(int min, int max)
{
	int *a, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	a = malloc(sizeof(int) * size);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = min++;

	return (a);
}
