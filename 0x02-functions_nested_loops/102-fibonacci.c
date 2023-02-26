#include <stdio.h>
/**
 * main - Prints the first 50 fibonacci numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, i, num1, num2;

	unsigned long int next;
	
	n = 50;
	num1 = 0;
	num2 = 1;
	next = num1 + num2;

	printf("%d, %d, ", num1, num2);
	for (i = 3; i <= n; ++i)
	{
		printf("%lu", next);
		if (i < n)
		{
			putchar(',');
			putchar(' ');
		}
		num1 = num2;
		num2 = next;
		next = num1 + num2;
	}
	putchar(10);
	return (0);
}
