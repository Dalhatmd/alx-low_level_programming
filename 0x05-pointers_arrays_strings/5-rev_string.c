#include "main.h"
/**
 * rev_string - A function that reverses an input string
 *
 * @s: Input string
 */
void rev_string(char *s)
{
	int i, j, count;

	char rev;

	count = 0;

	while (s[count] != '\0')
		count++;

	j = count - 1;

	for (i = 0; i < count; i++)
	{
		rev[i] = s[i];
	}
}
