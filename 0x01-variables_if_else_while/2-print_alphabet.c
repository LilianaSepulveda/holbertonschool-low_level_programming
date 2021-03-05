#include <stdio.h>
/**
 *main - print the alphabet in lowercase
 *
 *Return: Always 0.
 *
 */

int main(void)
{
	char alp1;

	alp1 = 'a';
	while (alp1 <= 'z')
	{
		putchar(alp1);
		alp1++;
	}
	putchar('\n');
	return (0);
}
