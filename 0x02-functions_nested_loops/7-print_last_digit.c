#include "holberton.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: Number integeer
 *
 * Return: The value of the last digit of a number
 */
int print_last_digit(int n)
{
	int a;

	a = n % 10;


	if (a < 0)
	{
		a *= -1;
	}
	_putchar(a + '0');
	return (a);

}
