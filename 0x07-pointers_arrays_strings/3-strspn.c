#include "main.h"
/**
 * _strspn - Counts the mumber of initial bytes in s that are in accept
 *
 * @s: intital string
 * @accept: second string
 *
 * Return: number of bytes 
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				count++;
		}
	}
	return (count);
}
