#include "holberton.h"

/**
 * _strcmp - compare two string
 *@s1: string number 1
 *@s2: string number 1
 *
 *Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int r;

	for (r = 0; s1[r] != '\0' && s2[r] != '\0'; r++)
	{
		if (s1[r] != s2[r])
			return ((int) s1[r] - s2[r]);

	}

	return (0);
}
