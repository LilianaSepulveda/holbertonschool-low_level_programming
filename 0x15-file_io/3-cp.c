#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>



/**
 * main - Copies the content of a file to another file
 *
 * @argc: Number argunebts
 * @argv: Input arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a, b;
	int count = 0, count1 = 0;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"),
			exit(97);
	a = open(argv[1], O_RDONLY);
	if (a == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]), exit(98);
	b = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (b == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
			argv[2]), exit(99);
	do {
		count = read(a, buffer, 1024);
		if (count == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]), exit(98);
		count1 = write(b, buffer, count);
		if (count1 == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				argv[2]), exit(99);
	} while (count == 1024);
	if (close(a) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", a),
			exit(100);
	if (close(b) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", b), exit(100);
	return (0);
}
