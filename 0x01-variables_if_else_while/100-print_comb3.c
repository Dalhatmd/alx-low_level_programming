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
				if (b == 56 && a == 57)
					break;
				putchar(',');
				putchar(' ');
			}
		a++;
		}
		b++;
	}
	putchar(10);
	return (0);
}
