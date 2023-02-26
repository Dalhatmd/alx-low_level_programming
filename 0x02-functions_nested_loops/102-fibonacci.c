#include <stdio.h>
/**
 * main - Prints the first 50 fibonacci numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, i;

	long int num1, num2;

	long int next;

	n = 48;
	num1 = 1;
	num2 = 2;
	next = num1 + num2;

	printf("%ld, %ld", num1, num2);
	for (i = 0; i < n; ++i)
	{
		next = num1 + num2;
		printf(", %ld", next);
		num1 = num2;
		num2 = next;
	}
	putchar(10);
	return (0);
}
