#include "holberton.h"

/**
 * _isalpha - checks for alphabetic character
 *@c: The character to be checked with the program
 *
 * Return: 1 if is a letter, lowercase or uppercase or 0 otherwise
 */
int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

	{
		return (1);
	}

	else
	{
		return (0);
	}
}
