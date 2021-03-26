#include "holberton.h"
#include <stdlib.h>


/**
 * _calloc - Allocates memory for an array
 *
 * @nmemb: Number of elements
 * @size: Byte size of each array element
 *
 * Return: Pointer to the allocated memory
 *         NULL if nmemb or size = 0. If the function fails
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(size * nmemb);

	if (a == NULL)
		return (NULL);


	for (i = 0; i < (size * nmemb); i++)
		a[i] = '\0';

	return (a);
}
