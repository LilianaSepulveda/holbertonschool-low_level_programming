#include "holberton.h"
#include <stdio.h>


/**
 * print_array - Prints n elements of an array of integers,
 *               followed by a new line.
 *
 * @a: Array.
 * @n: Number of elements of the array to be printed
 *
 */
void print_array(int *a, int n)
{
	int r;

	for (r = 0; r < n; r++)
	{
		printf("%d", a[r]);

		if (r < n - 1)
			printf(", ");
	}
	printf("\n");
}
