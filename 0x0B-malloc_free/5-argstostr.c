#include "holberton.h"
#include <stdlib.h>


/**
 * argstostr - Concatenates all arguments of the program
 *             arguments are separated by a new line in the string
 *
 * @ac: The Arguments to concatenate
 * @av: Pointers to the arguments
 *
 * Return: Pointer to the new string, it is fail return NULL
 *          NULL if ac == 0 or av == NULL
 *
 */
char *argstostr(int ac, char **av)
{
	char *st;
	int ag, r, i, len = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (ag = 0; ag < ac; ag++)
	{
		for (i = 0; av[ag][i]; i++)
			len++;
	}

	st = malloc(sizeof(char) * len + 1);

	if (st == NULL)
		return (NULL);

	r = 0;

	for (ag = 0; ag < ac; ag++)
	{
		for (i = 0; av[ag][i]; i++)
			st[r++] = av[ag][i];

		st[r++] = '\n';
	}

	st[len] = '\0';

	return (st);
}
