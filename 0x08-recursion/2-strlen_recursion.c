#include "main.h"
/**
 * _strlen_recursion - fuction to get length of a string
 *
 * @s: string to be counted
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	int count;

	count = 0;
	count++;
	_strlen_recursion(s + 1);
	return (count);
}
