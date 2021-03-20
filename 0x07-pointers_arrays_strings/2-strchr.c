#include "holberton.h"

/**
 * _strchr - Locates a character in a string.
 *
 * @s: String to search c character
 * @c: Character to be searched
 *
 * Return: If c is found - Pointer to the first occurence.
 *         If c is not found - NULL.
 */
char *_strchr(char *s, char c)
{
	int r;

	for (r = 0; s[r] >= '\0'; r++)
	{
		if (s[r] == c)
			return (s + r);
	}

	return ('\0');
}
