#include "holberton.h"
#include <stdlib.h>


/**
 * string_nconcat - Concatenates two strings
 *
 * @s1: First string.
 * @s2: Second string.
 * @n: Number of bytes of s2 to concatenate to s1
 *
 * Return: NULL if the function fails
 *         Pointer to the concatenated space in memory
 *         with s1 followed by the first n byte of s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int len = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	c = malloc(sizeof(char) * (len + 1));

	if (c == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		c[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		c[len++] = s2[i];

	c[len] = '\0';

	return (c);
}
