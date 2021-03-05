#include <stdio.h>
/**
 *main - print the alphabet in lowercase, and then in uppercase.
 *
 *Return: Always 0.
 *
 */

int main(void)

{
	char alp1;

	for (alp1 = 'a'; alp1 <= 'z'; alp1++)
	{
		putchar(alp1);
	}
	for (alp1 = 'A'; alp1 <= 'Z'; alp1++)
	{
		putchar(alp1);
	}

	putchar('\n');
	return (0);
}
