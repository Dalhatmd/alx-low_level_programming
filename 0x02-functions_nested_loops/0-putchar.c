#include <stdio.h>
/**
 * main - A program that prints "_putchar" to the screen
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\0'};

	int i;

	for (i = 0; i < 10; i++)
		putchar(ch[i]);
	putchar(10);
	return (0);
}
