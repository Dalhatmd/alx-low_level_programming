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

	for (ch = 48; ch < 58; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
