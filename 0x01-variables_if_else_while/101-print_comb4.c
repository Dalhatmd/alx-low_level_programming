#include <stdio.h>
/**
 * main - This program prints all possible combinations of three digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a, b, c;

	a = 48;
	b = 48;
	c = 48;

	while (c < 58)
	{
		b = 48;
		while (b < 58)
		{
			a = 48;
			while (a < 58)
			{
				if (c != b && c != a && c < b && c < a && b < a)
				{
					putchar(c);
					putchar(b);
					putchar(a);
					if (c == 55 && b == 56 && a == 57)
						break;
					putchar(',');
					putchar(' ');
				}
			a++;
			}
		b++;
		}
	c++;
	}
putchar(10);
return (0);
}
