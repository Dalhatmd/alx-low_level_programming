#include "main.h"
#include <stdlib.h>
/**
 * main - copies content of a file to another
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Descripton: Files will be passed as arguments to the main fuuction
 *
 * Return: 0 (successful)
 * 	   97(number of arguments incorrect)
 * 	   98(input file cannot be read)
 * 	   99(input file cannot be written)
 * 	   100(error while closing)
 */
int main(int argc, char **argv)
{
	int from, to, nread;
	char buffer[BUFFER_SIZE];
	char *file_from, *file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "usage: %s file_from file_to\n", argv[0]);
		exit (97);
	}

	file_from = argv[1];
	file_to = argv[2];

	from = open(file_from, O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %d\n", from);
		exit (98);
	}
	
	to = open(file_to, O_WRONLY | O_TRUNC | 0664);
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", file_to);
		exit (99);
	}

	while ((nread = read(from, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(to, buffer, nread) != nread)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %d\n", to);
			exit (99);
		}
	}

	if (nread == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %d\n", from);
		exit (98);
	}

	if (close(from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", from);
		exit (100);
	}

	if (close(to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", to);
		exit (100);
	}

	exit (EXIT_SUCCESS);
}
