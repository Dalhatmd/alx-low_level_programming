#include "main.h"
/**
 * _strcpy - copies the contents of a character array to anotue array
 * @dest: destinatiom array
 * @src: source array
 *
 * Return: destinatiom array with everything copied
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
