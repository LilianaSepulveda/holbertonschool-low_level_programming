#include "holberton.h"

/**
 * _strcpy - Copy the string pointed to src the buffer pointed to by dest.
 *
 * @dest: Buffer to copy the string
 * @src: Contains the string to copy.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int r = 0;

	while (src[r] != '\0')
	{
		dest[r] = src[r];
		r++;
	}
	dest[r] = '\0';
	return (dest);
}
