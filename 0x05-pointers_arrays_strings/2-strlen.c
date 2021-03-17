#include "holberton.h"

/**
 * _strlen - Returns the length of a string
 * @s: String
 *
 *Return: length of the string
 *
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);

}
