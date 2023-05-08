#include "main.h"
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n, nwrite;
	int fd;
	char *buffer = NULL;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (-1);

	buffer = malloc(letters);

	n = read(fd, buffer, letters);
	nwrite = write(STDOUT_FILENO, buffer, n);
	
	free(buffer);
	close (fd);

	return (nwrite);
}
