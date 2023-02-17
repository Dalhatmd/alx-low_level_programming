#include <stdio.h>
/**
 * main - Execution starts here
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char a[27] = "abcdefghijklmnopqrstuvwxyz";

	for (int x = 0; x <= 27; x++)
		putchar(a[x]);
	return (0);
}
