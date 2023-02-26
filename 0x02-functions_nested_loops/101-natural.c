#include <stdio.h>
/**
 * main - sum of numbers before 1024 that multiples of 3 or 5
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
}
