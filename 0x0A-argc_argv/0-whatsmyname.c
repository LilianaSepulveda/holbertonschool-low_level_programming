#include <stdio.h>
#include <stdlib.h>

/**
* main - Prints the program name, followed by new line
* @argc: Number of arguments into the program
* @argv: Array to pointer to the arguments
*
* Return: Always 0.
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
