#include <stdio.h>
/**
 * main - Execution starts
 *
 * Return: Always 0 (success)
 */
int main()
{
	char a[26] = "abcdefghijklmnopqrstuvwxyz";
	char b[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int x;

	int y;

	for (x = 0,y = 0; x < 26; x++, y++)
	{
		putchar(a[x]);
		putchar('\n');
		putchar(b[y]);
	}
	return (0);
}
