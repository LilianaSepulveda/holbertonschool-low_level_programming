#include "holberton.h"

/**
 * rev_string -  Reverse a string
 * @s: String
 *
 */
void rev_string(char *s)
{
	int r = 0, len = 0;
	char x;

	while (s[r++])
		len++;

	for (r = len - 1; r >= len / 2; r--)
	{
		x = s[r];
		s[r] = s[len - r - 1];
		s[len - r - 1] = x;

	}
}
