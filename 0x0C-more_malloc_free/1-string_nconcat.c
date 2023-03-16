#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates 2 strings
 *
 * @s1: first input string
 * @s2: second input string
 * @n: number of bytes to be concatenated
 *
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;

	char *con;

	len1 = 0;
	len2 = 0;
	i = 0;
	j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	con = malloc((len1 + n + 1) * sizeof(con));
	if (con == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		con[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		con[i + j] = s2[j];
		j++;
	}

	con[i + j] = '\0';

	return (con);
}
