#include "main.h"
/**
 * read_textfile - reads a text file
 *
 * @filename: file to be read
 * @letters: number of letters to be printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *f;
	int c;
	size_t count;

	count = 0;

	if (filename == NULL)
		return (0);

	f = fopen(filename, "r");
	if (f == NULL)
		return (0);

	while ((c = fgetc(f)) != EOF && count < letters)
	{
		if (putchar(c) == EOF)
		{
			fclose(f);
			return (0);
		}
		count++;
	}
	fclose(f);

	return (count);
}

