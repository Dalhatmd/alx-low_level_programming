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
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
