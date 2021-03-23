#include "holberton.h"
#include <stdlib.h>


/**
 * create_array - Creates an array of chars, and
 *                initializes it with a specific char
 *
 * @size: Size of the array
 * @c: Char to intialize the array
 *
 * Return: Pointer to the array or Null if it fails
 *         NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = malloc(sizeof(char) * size);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ar[i] = c;

	return (ar);
}
