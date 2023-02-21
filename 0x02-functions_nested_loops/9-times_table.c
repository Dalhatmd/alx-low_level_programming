#include "main.h"
/**
 * times_table - Function that prints out the 9 times table
 */
void times_table(void)
{
	int a, b, mult;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			mult = a * b;
			if (mult <= 9)
				_putchar(mult + 48);
			else
			{
				_putchar((mult / 10) + 48);
				_putchar((mult % 10) + 48);
			}
			if (b >= 9)
				continue;
			_putchar(44);
			_putchar(32);
			_putchar(32);
		}
		_putchar(10);
	}
}
