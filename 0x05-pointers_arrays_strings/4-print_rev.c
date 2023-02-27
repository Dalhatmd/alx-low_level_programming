#include "main.h"
#include <stdio.h>
/**
 * print_rev - Prints an input string in reverse
 *
 * @s: Input string
 */
void print_rev(char *s)
{
	int i, j, count;

	char rev[10000];

	count = 0;
	while (s[count] != '\0')
		count++;

	j = count - 1;

	for (i = 0; i < count; i++)
	{
		rev[i] = s[j];
		j--;
	}

	for (j = 0; j < count + 1; j++)
	{
		putchar(rev[j]);
		if (j == count)
			putchar('\0');
	}
	putchar(10);
}
