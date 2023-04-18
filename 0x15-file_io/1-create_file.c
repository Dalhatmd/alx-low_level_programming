#include "main.h"
#include <stdlib.h>
int create_file(const char *filename, char *text_content)
{
	int f, len;
	size_t written;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (f == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len] != '\0')
			len++;
	}
	written = write(f, text_content, len);
	if (written != len)
	{
		close(f);
		return (-1);
	}
	close(f);
	return (1);
}
