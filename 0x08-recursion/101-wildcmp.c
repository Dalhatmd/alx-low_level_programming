#include "main.h"
/**
 * wildcmp - checks if 2 strings are identical while factoring s2 having the
 * '*' special character
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == *s2 || *s2 == '*')
	{
		if (*s2 == '*')
		{
			if (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)))
				return (1);
		}
		return (wildcmp(s1 + 1, s2 + 1));
	}

	return (0);
}
