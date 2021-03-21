#include "holberton.h"

/**
 * print_chessboard - Prints a chessboard
 *
 * @a: Chessboard to print
 */
void print_chessboard(char (*a)[8])
{
	int r, i;

	for (r = 0; a[r][7]; r++)
	{
		for (i = 0; i < 8; i++)
			_putchar(a[r][i]);

		_putchar('\n');
	}
}
