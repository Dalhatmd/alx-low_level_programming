#include <stdio.h>
/**
 * main - Prints all numbers of base 16
 *
 * Return: Alway 0 (success)
 */
int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
		putchar(x);
	int y;

	for (y = 65; y < 70; y++)
		putchar(y);
	putchar(10);
	return (0);
}
