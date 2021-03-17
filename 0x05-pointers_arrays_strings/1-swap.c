#include "holberton.h"

/**
 * swap_int - Swaps the values of two integers
 *
 *@a: Integer 1
 *@b: Integer 2
 *
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
