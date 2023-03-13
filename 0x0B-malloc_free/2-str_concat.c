#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 *
 * s1: first string
 * s2: second string
 *
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len;

	char *a;
	
	len = 0;
	j = 0;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
		len++;

	a = malloc(sizeof(char) * len);

	if (a == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		a[j++] = s1[i];

	for (i = 0; s2[i] != '\0'; i++)
		a[j++] = s2[i];

	return (a);
}
