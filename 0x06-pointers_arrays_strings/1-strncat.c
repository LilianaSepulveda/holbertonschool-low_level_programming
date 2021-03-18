#include "holberton.h"

/**
 *_strncat - Concatenates two strings, and use at most n bytes from src.
 *
 *@dest: Pointer with concatenated string
 *@src: Pointer with string to be appended
 *@n: Bytes from src used by dest
 *
 *Return: pointer to the resulting string dest.
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int t = 0;
	int r = 0;

	for (t = 0; dest[t] != '\0'; t++)
	{
	}
	for (r = 0; r < n && src[r] != '\0'; r++)
		dest[t + r] = src[r];

	return (dest);
}
