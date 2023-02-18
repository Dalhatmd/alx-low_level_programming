#include <stdio.h>
/**
 * main - prints all possible combinations of two digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a, b;

	a = 48;
	b = 48;
	while (b < 58)
	{
		a = 48;
		while (a < 58)
		{
			if (b != a && b < a)
			{
				putchar(b);
				putchar(a);
				putchar(',');
				putchar(' ');
			}
		a++;
		}
		b++;
	}
	return (0);
}
