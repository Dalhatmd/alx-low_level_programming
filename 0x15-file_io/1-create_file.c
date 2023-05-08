#include "main.h"
/**
 * create_file - creates a file
 *
 * @filename: name of file
 * @text_content: contenr to be written to file
 *
 * Return: 1 if successful and -1 on error
 */
int create_file(const char *filename, char *text_content)
{
	int o, w;
	size_t len;

	len = 0;
	if (filename == NULL)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
	}
	o = open(filename, O_TRUNC | O_RDWR | O_CREAT, 0600);
	if (o == -1)
		return (-1);
	w = write(o, text_content, len);
	if (w == -1)
		return (-1);

	close(o);

	return (1);
}


