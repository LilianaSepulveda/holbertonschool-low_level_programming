#include <stdio.h>
/**
 *main - print the alphabet in lowercase.
 * Print all the letters except q and e
 *Return: Always 0.
 *
 */

int main(void)
{
	char alp1;


	for (alp1 = 'a'; alp1 <= 'z'; alp1++)
	{
		if (alp1 != 'e' && alp1 != 'q')
			putchar(alp1);
	}

	putchar('\n');

	return (0);
}
