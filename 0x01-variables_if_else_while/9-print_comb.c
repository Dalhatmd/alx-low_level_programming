#include <stdio.h>
/**
 * main - prints all combinations of 0 - 9
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
		if (x != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);
	return (0);
}
