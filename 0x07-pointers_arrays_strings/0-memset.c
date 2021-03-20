#include "holberton.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: Pointer with memory area to be filled.
 * @b: Contant byte character to fill the memory area
 * @n: The number of bytes to be filled.
 *
 * Return: Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int r;
	char *m = s;

	for (r = 0; r < n; r++)
		m[r] = b;

	return (m);
}
