#include "holberton.h"

/**
 * _strspn - Gets the length of a prefix substring
 *
 * @s: String
 * @accept: Bytes supported..
 *
 * Return: Number of bytes in s which
 *         consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int r;

	while (*s != '\0')
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				bytes++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
