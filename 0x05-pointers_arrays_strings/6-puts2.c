#include "main.h"
/**
 * _puts2 - prints every other character in a string
 *
 * @str: Input string
 */
void _puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		putchar(str[i]);
	}
