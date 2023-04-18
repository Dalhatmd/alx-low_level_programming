#include "main.h"
/**
 * append_text_to_file - appends text go existing file
 *
 * @filename: name of file
 * @text_content: content to be appended to file
 *
 * Return: 1 if successful, -1 if unsuccessful
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	size_t len, written;

	len = 0;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
		written = write(f, text_content, len);
		if (written != len)
		{
			close(f);
			return (-1);
		}
	}

	close(f);
	return (1);
}
