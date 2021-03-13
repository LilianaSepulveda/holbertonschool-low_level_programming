#include "holberton.h"

/**
 * times_table - Prints the 9 times table starting with 0.
 *
 *
 */
void times_table(void)
{
	int a;
	int b;
	int prod;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');

		for (b = 1; b <= 9; b++)
		{
			_putchar(',');
			_putchar(' ');

			prod = a * b;

			if (prod <= 9)

				_putchar(' ');

			else

				_putchar((prod / 10) + '0');

				_putchar((prod % 10) + '0');


		}
		_putchar('\n');
	}

}
