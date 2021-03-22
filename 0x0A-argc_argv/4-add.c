#include <stdio.h>
#include <stdlib.h>

/**
 *main - Adds positive numbers.
 *@argc: Number of arguments into the program
 *@argv: Array to pointer to the arguments
 *
 *Return: 1 if number contains symbols that are not digits
 *        0 if is sucess
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int n, r;

	for (n = 1; n < argc; n++)
	{
		for (r = 0; argv[n][r]; r++)
		{
			if (argv[n][r] < '0' || argv[n][r] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[n]);
	}
	printf("%d\n", sum);

	return (0);
}

