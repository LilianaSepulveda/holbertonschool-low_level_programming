#include "holberton.h"

/**
 * puts2 - prints one of two characters of a string,
 *           starting with the first character 0.
 * @str: String
 */
void puts2(char *str)
{
	int r = 0;
	int len = 0;

	while (str[r++])
		len++;

	for (r = 0; r < len; r += 2)
		_putchar(str[r]);

	 _putchar('\n');
}
