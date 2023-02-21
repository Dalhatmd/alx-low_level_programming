#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints all the alphabets in lowercase
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar(10);
}

