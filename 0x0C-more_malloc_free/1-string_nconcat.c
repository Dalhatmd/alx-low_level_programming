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
	unsigned int len1, len2, i, lens, j;

	char *con;

	len1 = 0;
	len2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len1++;

	for (j = 0; s2[j] && j < n; j++)
		len2++;
	
	lens = len1 + len2;

	con = malloc(sizeof(char) * lens);

	for (i = 0; i < len1; i++)
		con[i] = s1[i];
	for (j = 0; j < len2; j++)
		con[i + j] = s2[j];

	con[i + j] = '\0';

	return (con);
}
