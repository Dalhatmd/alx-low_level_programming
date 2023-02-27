#include "main.h"
/**
 * rev_string - A function that reverses an input string
 *
 * @s: Input string
 */
void rev_string(char *s)
{
	int i, j, count;

	char rev[1000];

	char tmp[1000];

	count = 0;

	while (s[count] != '\0')
		count++;

	j = count - 1;

	i = 0;
	while (i < count)
	{
		tmp[i] = s[j];
		j--;
		i++;
	}
	rev = tmp;
}
