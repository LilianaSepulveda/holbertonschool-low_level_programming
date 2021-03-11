 #include "holberton.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 *                        followed by a new line.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int alp;
	int x;

	for (x = 1; x <= 10; x++)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}

		_putchar('\n');
	}

}
