#include "main.h"
/**
 * print_most_numbers - prints numbers between 0 and 9 but skips 2 and 4
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == 50 || i == 52)
			continue;
		_putchar(i);
	}
	_putchar(10);
}
