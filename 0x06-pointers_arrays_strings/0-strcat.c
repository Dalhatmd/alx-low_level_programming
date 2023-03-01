#include "main.h"
/**
 * _strcat - Concantenates 2 strings
 *
 * @dest: destination string
 * @src: Source string
 *
 * Return: A string with @src concantenated to @dest
 */
char *_strcat(char *dest, char *src)
{
	int count1, count2;

	count1 = 0;
	count2 = 0;


	while ((*dest + count) != '\0')
		count1++;

	while (count 2 >= 0)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == 0)
			break;
		count1++;
		count2++;
	}
	return (dest);
}
