#include "main.h"
/**
 * _strchr - searches a string for a character
 *
 * @s: string to be searched
 * @c: character to be searched for
 *
 * Return: Characterbif it is found and null if it is not
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return (*(s + i));
		return ('\0');
	}
}
