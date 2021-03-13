#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 -  prints all natural numbers from n to 98.
 * @n: number to start a count.
 *
 *Return: Always 0.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}
		printf("%d\n", n);
	}
}
