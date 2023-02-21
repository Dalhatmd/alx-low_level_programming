#include <stdio.h>
/**
 * print_alphabet - prints alphabet in lowercase
 *
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar(10);
}
/**
 * main - Execution starts here
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
