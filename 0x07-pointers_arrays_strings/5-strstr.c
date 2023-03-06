#include "main.h"
/**
 * _strstr - searches for a substring in anothe string
 *
 * @haystack: main string
 * @: needle: substring to searched
 *
 * Return: pointer to start of substring
 */
char *_strstr(char *haystack, char *needle)
{
	int needle_len, haystack_len, i, j, k;

	needle_len = 0;
	haystack_len = 0;
	i = 0;
	j = 0;
	k = 0;

	while (needle[needle_len] != '\0')
	{
		needle_len++;
	}
	while (haystack[haystack_len] != '\0')
	{
		haystack_len++;
	}

	if (needle_len == 0)
		return ('\0');

	for (i = 0; i < haystack_len; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = i, k = 0; k < needle_len && haystack[j] == needle[k]; j++, k++);

		if (k == needle_len)
			return (haystack[i]);
		}
	}
	return ('\0');
}
