#include "holberton.h"


/**
 * _strpbrk - Searches a string for any of a set of bytes
 *
 * @s: String to search
 * @accept: Bytes to be compared
 *
 * Return: Pointer to the byte in s, if matches one of the bytes in accept
 *         NULL, if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
				return (s);
		}

		s++;
	}

	return ('\0');
}
