#include "holberton.h"

/**
 * print_rev -  prints a string, in reverse, followed by a new line.
 * @s: String
 */
void print_rev(char *s)
{
	int r = 0;

	while (s[r] != '\0')
		r++;

	for (r = r - 1; r >= 0; r--)
		_putchar(s[r]);

	_putchar('\n');
}
