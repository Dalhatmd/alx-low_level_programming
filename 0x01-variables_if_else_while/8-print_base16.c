#include <stdio.h>
/**
 * main - Prints all numbers of base 16
 *
 * Return: Alway 0 (success)
 */
int main(void)
{
	int x, y;

	for (x = 48; x <= 57; x++)
		putchar(x);
	for (y = 97; y < 103; y++)
		putchar(y);
	putchar(10);
	return (0);
}
