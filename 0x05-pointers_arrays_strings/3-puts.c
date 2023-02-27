#include "main.h"
#include <stdio.h>
/**
 * _puts - Prints a string to stdout
 *
 * @str: Input string
 */
void _puts(char *str)
{
	int i;

	i = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar(10);
}
