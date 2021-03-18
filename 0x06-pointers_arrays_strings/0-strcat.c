#include "holberton.h"


/**
 *_strcat - concatenates two strings.
 *
 *@dest: Pointer with concatenated string
 *@src: Pointer with string to be appended
 *
 *Return: pointer to the resulting string dest.
 *
 */
char *_strcat(char *dest, char *src)
{
	int t = 0;
	int r = 0;

	while (dest[t] != '\0')
	{
		t++;
	}
	while (src[r] != '\0')
	{
		dest[t + r] = src[r];
		r++;
	}

	return (dest);
}
