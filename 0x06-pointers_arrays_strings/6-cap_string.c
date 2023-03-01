#include "main.h"
/**
 * cap_string - Capitalizes all words in a string
 *
 * @s: string to be capitalized
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;
	for (i = 0; str[i] != '\0' ; i++)
	{
		if (s[i] == ' ' || s[i] == ',' || s[i] == '.' || s[i] == '!' || s[i] == '?' || str[i] == '"' || str[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}' || s[i] == '\n' || s[i] == '\t')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
			s[i + 1] -= 32;
			}
		}
	}

	return (s);
}
