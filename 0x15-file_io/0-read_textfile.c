#include "holberton.h"


/**
 * read_textfile - Reads a text file and prints it to POSIX standard output.
 *
 * @filename: Pointer with name of the file
 * @letters: Number of letters should read and print
 *
 * Return: 0 If the function fails or filename is NULL
 *         The actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int b, c = 1, len = 1;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters + 1);

	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	b = open(filename, O_RDONLY | O_EXCL);

	if (b != -1)
		len = read(b, buffer, letters);
	else
		len = 0;
	buffer[letters] = '\0';

	c = write(STDOUT_FILENO, buffer, len);

	if (c == -1)
		len = 0;

	close(b);
	free(buffer);
	return (len);
}
