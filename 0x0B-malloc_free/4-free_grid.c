#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees the memory of a 2d array
 *
 * @grid: grid of the array
 * @height: height of the array
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
