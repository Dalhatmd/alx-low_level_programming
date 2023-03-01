#include "main.h"
char *_strcat(char *dest, char *src)
{
	char str3[5000];
	
	int i, j;

	i = 0;
	j = 0;

	while (src[i] != '\0')
	{
		str3[j] = src[i];
		i++;
		j++;
	}

	i = 0;
	while (dest[i] != '\0')
	{
		str3[j] = dest[i];
		i++;
		j++;
	}

	for (i = 0; str3[i] != '\0'; i++)
	{
		dest[i] = str3[i];
	}
	return (dest);

}
