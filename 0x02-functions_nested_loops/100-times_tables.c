#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the times table from 0 to n
 *
 * @n: stopping point for the times table
 */
void print_times_table(int n)
{
	int i, j, ans1, ans2;

	if(n <= 0 || n >= 15)
	{
		putchar(10);
		exit();
	}

	for (i = 0; i < n; i++)
	{
		putchar(48);
		for (j = 1; j <= n; j++)
		{
			ans1 = i * j;
			if (j == n)
				break;
			if (ans1 <= 9)
			{
				putchar(' ');
				putchar(' ');
				putchar(' ');
				putchar(op + 48);
			}
			else if (ans1 > 9 && ans2 < 100)
			{
				putchar(' ');
				putchar(' ');
				putchar((op / 10) + 48);
				putchar((op % 10) + 48);
			}
			else if (ans 1 > 100)
			{
				ans2 = ans1 % 100;
				putchar(' ');
				putchar((op / 100) + 48);
				putchar((ans2 / 10) + 48);
				putchar((ans2 % 10) + 48);
			}
			if (j >= n)
				continue;
			putchar(',');
		}
		putchar(10);
	}
	return (0);
}
