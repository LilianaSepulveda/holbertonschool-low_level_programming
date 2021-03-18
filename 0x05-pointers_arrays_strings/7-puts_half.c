#include "holberton.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 *
 * @str: String
 *
 */
void puts_half(char *str)
{
	int len = 0;
	int n;

	int r = 0;

	while (str[r++])
		len++;

	if ((len % 2) == 0)
		n = len / 2;

	else
		n = (len + 1) / 2;

	for (r = n; r < len; r++)
		_putchar(str[r]);

	_putchar('\n');
}
