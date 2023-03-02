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

	char result[] = s;

	char a[] = "AaEeOoTtLl";
	char b[] = "4433007711";

	for (i = 0; result[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (result[i] == a[j])
				result[i] = b[j];
		}
	}
	return (result);
}
