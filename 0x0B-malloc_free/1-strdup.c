#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory which
 * contains a copy of a string
 *
 * @str: string to be copied
 *
 * Return: pointer of a newly allocated space in memory
 */
char *_strdup(char *str)
{
	char *a;

	unsigned int i, count;

	count = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	a = malloc(sizeof(char) * count);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
		a[i] = str[i];


	return (a);
}
