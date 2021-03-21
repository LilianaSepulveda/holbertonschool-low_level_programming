#include "holberton.h"


/**
 * _strstr - Locates a substring
 *
 * @haystack: String to searche
 * @needle: Substring to be located in string haystack
 *
 * Return: Pointer to the beginning of the located substring
 *         of the located substring.
 *         NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int r;

	if (*needle == 0)
		return (haystack);

	for (r = 0; *haystack; haystack++)
	{
		if (haystack[r] == needle[r])
			return (haystack);

		else if (needle[r + 1] == '\0')
			return (haystack);
	}
	return ('\0');
}
