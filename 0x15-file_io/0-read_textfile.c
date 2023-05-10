#include "main.h"
/**
 * read_textfile - reads a text file and prints it to STDERR
 *
 * @filename: name of file to be printed
 * @letters: number of characters to be printed
 *
 * Return: number of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n, nwrite, o;
	char *buffer = NULL;

	o = open(filename, O_RDONLY);

	if (o == -1)
		return (-1);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	n = read(o, buffer, letters);
	nwrite = write(STDOUT_FILENO, buffer, n);
	if (nwrite == -1)
	{
		free(buffer);
		return (0);
	}
	if (nwrite != n)
	{
		free(buffer);
		return (0);
	};
	free(buffer);
	close(o);
	return (nwrite);
}
