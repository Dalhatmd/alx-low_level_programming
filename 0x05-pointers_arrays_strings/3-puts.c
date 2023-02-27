#include "main.h"
/**
 * _puts - Prints a string to stdout
 *
 * @str: Input string
 */
void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
