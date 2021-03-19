#include "holberton.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 *
 * @lett: String to be change
 *
 * Return: Pointer with changed string.
 */
char *string_toupper(char *lett)
{
	int r = 0;

	while (lett[r])
	{
		if (lett[r] >= 'a' && lett[r] <= 'z')
			lett[r] -= 32;

		r++;
	}

	return (lett);
}
