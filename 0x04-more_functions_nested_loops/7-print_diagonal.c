#include "holberton.h"

/**
 * print_diagonal -  Draws a diagonal line on the terminal.
 * @n: number of times the character \ should be printed
 *
 */
void print_diagonal(int n)
{
	int diag, spac;

	if (n > 0)
	{
		for (diag = 0; diag < n; diag++)
		{
			for (spac = 0; spac < diag; spac++)
				_putchar(' ');
			_putchar('\\');

			if (diag == n - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
