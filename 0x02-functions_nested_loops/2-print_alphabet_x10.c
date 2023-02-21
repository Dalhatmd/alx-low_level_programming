#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int i;

	while (i < 11)
	{
		int j;

		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar(10)
		i++;
	}
