#include "holberton.h"
#include <stdlib.h>


/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter
 *
 * @str: String to copy
 *
 * Return: Null iF  str = Null and if insufficient memory was available
 *          Pointer to the duplicated string.
 *
 */
char *_strdup(char *str)
{
	int i, len = 0;
	char *copy;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	copy = malloc(sizeof(char) * (len + 1));

	if (copy == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		copy[i] = str[i];

	copy[len] = '\0';

	return (copy);
}
