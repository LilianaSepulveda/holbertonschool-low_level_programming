#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase
 *        Use only putchar.
 * Return: Always 0.
 */

int main(void)

{
	int num;
	char let;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (let = 'a'; let <= 'f'; let++)
	{
		putchar(let);
	}
	putchar('\n');
	return (0);
}
