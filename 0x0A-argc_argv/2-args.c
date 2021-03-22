#include <stdio.h>

/**
*main - prints the number of arguments passed into it
*@argc: Number of arguments into the program
*@argv: Array to pointer to the arguments(unused)
*
*Return: Always 0.
*/
int main(int argc, char *argv[])
{
	int r;

	for (r = 0; r < argc; r++)
	{
		printf("%s\n", argv[r]);
	}
	return (0);

}
