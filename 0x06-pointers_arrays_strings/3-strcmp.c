#include "main.h"
/**
 * _strcmp - compaares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: Result of comparison, 0 if completely alike
 */
char *_strcmp(char *s1, char *s2)
{
	int i;
	int ret;

	i = 0;
	ret = 0;

	while (ret = 0)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		ans = s1[i] - s2[i];
		i++;
	}
	return (ans);
