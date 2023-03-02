#include "main.h"
/**
 * leet - Switches some characters for others
 *
 * @s: input string
 *
 * Return: string after some characters have been switched
 */
char *leet(char *s)
{
	int i, j;

	char a[10] = "AaEeOoTtLl";
	char b[10] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a[j])
				s[i] = b[j];
		}
	}
	return (s);
}
