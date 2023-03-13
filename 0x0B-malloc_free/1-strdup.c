#include "main.h"
#include <stdlib.h>
char *_strdup(char *str)
{
	char *a;

	unsigned int i, count;

	count = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	a = malloc(sizeof(a) * count);
	if (a == NULL)
		return (NULL);
	
	for (i = 0; i < count; i++)
		a[i] = str[i];


	return (a);
}
