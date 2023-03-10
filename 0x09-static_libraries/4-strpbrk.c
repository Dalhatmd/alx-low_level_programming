#include "main.h"
/**
 * _strpbrk - Checks for the first occurence of a string
 *
 * @s: first input string
 * @accept: second in put string
 *
 * Return: First occurence of character if found and null otherwise
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
