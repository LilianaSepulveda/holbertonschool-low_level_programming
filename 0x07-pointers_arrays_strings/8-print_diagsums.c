#include "holberton.h"
#include <stdio.h>


/**
 * print_diagsums - Prints the sum of the two diagonals
 *                  of a square matrix of integers
 *
 * @a: Matrix of integers
 * @size: Size of matrix
 */
void print_diagsums(int *a, int size)
{
	int r;
	int m1 = 0, m2 = 0;

	for (r = 0; r < size; r++)
	{
		m1 += a[r];
		a += size;
	}

	a -= size;

	for (r = 0; r < size; r++)
	{
		m2 += a[r];
		a -= size;
	}

	printf("%d, %d\n", m1, m2);
}
