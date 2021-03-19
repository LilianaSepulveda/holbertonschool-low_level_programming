#include "holberton.h"


/**
 * *cap_string - Capitalizes all words of a string.
 *
 * @st: String
 *
 * Return: Pointer to string capitalized.
 */
char *cap_string(char *st)
{
	int r = 0;

	while (st[r])
	{
		while (!(st[r] >= 'a' && st[r] <= 'z'))
			r++;

		if (st[r - 1] == ' ' ||
		    st[r - 1] == '\t' ||
		    st[r - 1] == '\n' ||
		    st[r - 1] == ',' ||
		    st[r - 1] == ';' ||
		    st[r - 1] == '.' ||
		    st[r - 1] == '!' ||
		    st[r - 1] == '?' ||
		    st[r - 1] == '"' ||
		    st[r - 1] == '(' ||
		    st[r - 1] == ')' ||
		    st[r - 1] == '{' ||
		    st[r - 1] == '}' ||
		    r == 0)
			st[r] -= 32;

		r++;
	}

	return (st);
}
