#include "holberton.h"

/**
 * _memcpy - Copies memory area
 *
 * @dest: Pointer with memory area copied.
 * @src: Memory area source to copy
 * @n: Number of bytes to copy
 *
 * Return: Pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int r;

	for (r = 0; r < n; r++)
		dest[r] = src[r];

	return (dest);
}
