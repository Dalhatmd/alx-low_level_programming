#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: input number
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int started;

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	started = 0;

	while (mask > 0) {
		if ((n & mask) == mask) {
			putchar('1');
			started = 1;
		}
		else if (started)
		{
			putchar('0');
		}
		mask >>= 1;
	}
	if (!started) {
		putchar('0');
	}
}
