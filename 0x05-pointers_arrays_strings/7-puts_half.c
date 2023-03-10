#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints half of a string
 *
 * @str: input string
 */
void puts_half(char *str)
{
	int count, i;

	count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
			break;
		count++;
	}
	if (count % 2 == 1)
		i = count / 2;
	else
		i = (count - 1) / 2;

	for (i++; i < count; i++)
		putchar(str[i]);
	putchar(10);
}
