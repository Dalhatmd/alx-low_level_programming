#include "main.h"
/**
 * append_text_to_file - appends text to file
 *
 * @filename: name of file
 * @text_content: content to be added to the file
 *
 * Return: 1 if successful and -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w;
	size_t size;

	size = 0;

	if (filename == NULL)
		return (-1);
	if (text_content)
	{
		while (text_content[size])
			size++;
	}

	o = open(filename, O_WRONLY | O_RDONLY | O_APPEND);
	if (o == -1)
		return (-1);

	w = write(o, text_content, size);
	if (w == -1)
		return (-1);

	close(o);
	return (1);
}
