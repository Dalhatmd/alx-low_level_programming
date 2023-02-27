#include "main.h"
/**
 * _strlen - counts the number of characters in a given string
 *
 * @s: string to be counted
 *
 * Return: Number of characters in @*s
 */
int _strlen(char *s)
{
	int i, count;

	i = 0;
	for (s[i] = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
