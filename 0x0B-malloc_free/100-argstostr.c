#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates every argument of the program
 *
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i, j, count, pos;

	char *result;

	count = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			count++;
	}
	result = malloc(sizeof(char) * count + ac);

	if (result == NULL)
		return (NULL);

	pos = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			result[pos + j] = av[i][j];
		result[pos + j] = '\n';
		pos += j + 1;
	}
	result[pos] = '\0';

	return (result);
}
