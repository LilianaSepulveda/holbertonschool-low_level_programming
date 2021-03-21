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
	int r = 0;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		if (haystack[r] == needle[r])
		{
			do {
				if (needle[r + 1] == '\0')
					return (haystack);

				r++;

			} while (haystack[r] == needle[r]);
		}
		haystack++;
	}

	return ('\0');
}
