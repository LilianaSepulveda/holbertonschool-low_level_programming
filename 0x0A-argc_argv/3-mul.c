#include <stdio.h>
#include <stdlib.h>

/**
 *main - Multiplies two numbers
 *@argc: Number of arguments into the program
 *@argv: Array to pointer to the arguments
 *
 *Return: 1 if the program does not receive two arguments
 *        0 if is sucess
 */
int main(int argc, char *argv[])
{
	int mul;
	int n1, n2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	mul = n1 * n2;

		printf("%d\n", mul);

	return (0);
}
