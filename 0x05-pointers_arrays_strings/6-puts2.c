#include "main.h"
#include <stdio.h>
/**
 * _puts2 - prints every other character in a string
 *
 * @str: Input string
 */
void puts2(char *str)
{
	int i, count;

	count = 0;

	while (str[count] != '\0')
	{
		count++;
	}

	for (i = 0; i < count; i += 2)
	{
		putchar(str[i]);
	}
	putchar(10);
}
