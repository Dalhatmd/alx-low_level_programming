#include "main.h"
/**
 * rev_string - A function that reverses an input string
 *
 * @s: Input string
 */
void rev_string(char *s)
{
	int i, j, count;


	count = 0;

	while (s[count] != '\0')
		count++;

	j = count - 1;

	i = 0;
	while (i < count)
	{
		s[i] = s[j];
		if (s[i] == s[j])
			continue;
		j--;
		i++;
	}
}
