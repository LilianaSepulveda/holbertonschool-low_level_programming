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
	int r;

	for (r = 0; st[r] != '\0'; r++)
	{
		if (r == 0)
		{
			if (st[r] >= 'a' && st[r] <= 'z')
				st[r] = st[r] - 32;
		}

		else
		{
			if (st[r] == ' ' ||
			    st[r] == '\t' ||
			    st[r] == '\n' ||
			    st[r] == ',' ||
			    st[r] == ';' ||
			    st[r] == '.' ||
			    st[r] == '!' ||
			    st[r] == '?' ||
			    st[r] == '(' ||
			    st[r] == ')' ||
			    st[r] == '{' ||
			    st[r] == '}')

				if (st[r + 1] >= 'a' && st[r + 1] <= 'z')
					st[r + 1] = st[r + 1] - 32;

		}

	}
	return (st);
}
