#include "main.h"

/**
 *  * rev_string - reverses a string
 *   * @s: string to be reversed
 *    */
void rev_string(char *s)
{
	char tmp;
	int i, count, len1;

	count = 0;
	len1 = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	len1 = count - 1;

	for (i = 0; i < count / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len1];
		s[len1--] = tmp;
	}
}
