#include "holberton.h"

/**
 * print_triangle - Prints a triangle with #, followed by a new line
 * @size: Size of the triangle.
 *
 */
void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= size; b++)
		{
			if (b <= size - a)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
