#include "main.h"
#include <stdio.h>
/**
 * more_numbers - Prints numbers from 0 - 14 ten times
 */
void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				putchar(j / 10 + '0');
			putchar(j % 10 + '0');
		}
		putchar(10);
		i++;
	}
}
