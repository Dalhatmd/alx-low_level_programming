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
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit (97);
	}

	file_from = argv[1];
	file_to = argv[2];

	from = open(file_from, O_RDONLY);
	if (from == -1)
	{
		exit (98);
	}
	
	to = open(file_to, O_WRONLY | O_TRUNC | 0664);
	if (to == -1)
	{
		exit (99);
	}

	while ((nread = read(from, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(to, buffer, nread) != nread)
		{
			exit (99);
		}
	}

	if (nread == -1)
	{
		exit (98);
	}

	if (close(from) == -1)
	{
		exit (100);
	}

	if (close(to) == -1)
	{
		exit (100);
	}

	exit (EXIT_SUCCESS);
}
