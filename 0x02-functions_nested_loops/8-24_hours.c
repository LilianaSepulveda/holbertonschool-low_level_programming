#include "holberton.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer.
 *              from 00:00 to 23:59.
 *
 */
void jack_bauer(void)
{
	int hora;
	int min;

	for (hora = 0; hora <= 23; hora++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((hora / 10) + '0');
			_putchar((hora % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}

	}

}
