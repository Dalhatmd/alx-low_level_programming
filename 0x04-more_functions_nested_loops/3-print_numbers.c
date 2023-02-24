#include <stdio.h>
#include "main.h"
/**
 * print_numbers - Prints from 0 - 9
 *
 * Return: no return
 */
void print_numbers(void)
{
	int ch;

	for (ch = 48; ch <= 58; ch++)
	{
		_putchar(ch + '0');
	}
	_putchar('\n');
}
