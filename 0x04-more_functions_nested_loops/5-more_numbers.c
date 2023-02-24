#include <stdio.h>
#include "main.h"
void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		for (i = 48; i < 58; i++)
		{
			putchar(i);
		}
		j = 10;
		for (j = 10; j < 14; j++)
		{
			putchar(j / 10);
			putchar(j % 10);
		}
		i++;
	}
}
