#include "main.h"
/**
 * string_toupper - Changes every character in a string to upper case
 *
 * @s: string to be converted to uppercase
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
	return (s);
}
