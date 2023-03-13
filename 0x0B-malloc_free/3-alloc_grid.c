#include "main.h"
#include <stdlib.h>
/** alloc_grid - allocates memory for a 2d array
 *
 * @width: width of the array
 * @height: height od the array
 *
 * Return: Pointer to the memory allocated
 */
int **alloc_grid(int width, int height)
{
	int **a;

	int i, j;

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free (a[j]);
			}
			free (a);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}

	}
	return (a);
}
