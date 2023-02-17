#include <stdio.h>
/**
 * main - Execution starts
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char a[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int x;

	for (x = 0; x < 52; x++)
		putchar(a[x]);
	putchar('\n');
	return (0);
}
