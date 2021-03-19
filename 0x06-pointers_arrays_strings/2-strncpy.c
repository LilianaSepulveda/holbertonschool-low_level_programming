#include "holberton.h"

/**
 *_strncpy - copies a string.
 *
 *@dest: Buffer to copy the string
 *@src: Contains the string to copy.
 *@n: Bytes from src used by dest
 *
 * Return: pointer to dest.
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	{

		int r;

		for (r = 0; r < n && src[r] != '\0'; r++)
			dest[r] = src[r];

		for ( ; r < n; r++)
			dest[r] = '\0';
	}
	return (dest);

}
