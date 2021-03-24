#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 *
 * @s1: String to be concatenated
 * @s2: string to be concatenated
 *
 * Return: NULL if the function failure, or it means an empty string
 *         Pointer whith the concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i, cr = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat_str[cr++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat_str[cr++] = s2[i];

	return (concat_str);
}
