#include <stdio.h>
/**
 * main - Execution starts here
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char a[26] = "abcdefghijklmnopqrstuvwxyz";
	int x;

	for (x = 0; x < 26; x++)
		putchar(a[x]);
	putchar('\n');
	return (0);
}
