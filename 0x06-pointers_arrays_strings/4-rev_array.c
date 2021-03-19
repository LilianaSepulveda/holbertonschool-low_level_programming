#include "holberton.h"
/**
 * reverse_array - reverses the content of an array of integers.
 *
 *@a: array to be reversed
 *@n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int x;
	int  z;
	int index;

	z = n - 1;

	for (index = 0; index < n / 2; index++)
	{
		x  = a[index];
		a[index] = a[z];
		a[z] = x;
		z--;

	}
}
