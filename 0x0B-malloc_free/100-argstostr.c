#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates every argument of the program
 *
 * @ac: number of arguments
 * @av: array of arguments
 */
char *argstostr(int ac, char **av)
{
	int i, count;

	char **a;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		count++;

	a = malloc(sizeof(char *) * count);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		a[i] = av[i];
	}
	return (*a);
}
