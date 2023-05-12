#include "main.h"
char *create_buffer(char *file);
void close_file(int file_desc);
/**
 * create_buffer - creates a buffer by allocating memory to it
 *
 * @file: file to be allocated
 *
 * Return: pointer to tge allocated memory
 */
char *create_buffer(char *file)                                               {
        char *buffer;

        buffer = malloc(sizeof(char) * 1024);
        if (buffer == NULL)
        {
                dprintf(STDERR_FILENO, "Error can't write to %s\n", file);
		exit(98);
        }
	return (buffer);
}
/**
 * close_file - closes a file
 *
 * @file_desc: file description
 */
void close_file(int file_desc)
{
        int c;
        c = close(file_desc);
        if (c == -1)
        {                                                                                     dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_desc);
                exit(100);
	}
}
/**
 * main - main function.
 *
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: Always 0 (success)
 */
int main(int ac, char *av[])
{
        int from, to, r, w;
        char *buffer;
        if (ac != 3)
        {
                dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
                exit(97);
        }

        buffer = create_buffer(av[2]);
        from = open(av[1], O_RDONLY);
        if (from == -1)
        {
                dprintf(STDERR_FILENO, "Error, Can't open %s\n", av[1]);
                free(buffer);
                exit(98);
        }

        r = read(from, buffer, 1024);
        to = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
        if (to == -1)
        {
                dprintf(STDERR_FILENO, "Error, Can't open %s\n", av[2]);
                free(buffer);
                close_file(from);
                exit(99);
        }

        do
        {
                w = write(to, buffer, r);
                if (w == -1)
                {
                        dprintf(STDERR_FILENO, "Error, Can't write to %s\n", av[2]);
                        free(buffer);
                        close_file(from);
                        close_file(to);
                        exit(100);
                }
                r = read(from, buffer, 1024);
        }
        while (r > 0);

        free(buffer);
        close_file(to);
        close_file(from);

        return (0);
}
