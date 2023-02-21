#include <stdio.h>
/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 */
void print_alphabet_x10(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		int j;

		for (j = 'a'; j <= 'z'; j++)
		{
			putchar(j);
		}
		i++;
		putchar(10);
	}
}
/**
 * main - Execution starts here
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}
