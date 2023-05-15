#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - function that frees a 2 dimensional grid previously
 * created by alloc_grid
 * @grid: grid to free
 * @height: height of the grid
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int k;

	if (grid == NULL || height == 0)
		return;

	for (k = 0; k < height; k++)
	{
		free(grid[k]);
	}
	free(grid);
}
