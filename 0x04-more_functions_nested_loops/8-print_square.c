#include "holberton.h"

/**
 * print_square -  Prints a square with #, followed by a new line.
 * @size: The size of the square.
 *
 */
void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (y = 0; y < size; y++)
		{
			for (x = 0; x < size; x++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
