#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - function that creates pointer to a 2 dimensional
 * array of integers of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: NULL,If width or height is 0 or negative
 */

int **alloc_grid(int width, int height)
{
	int b, j;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < height; b++)
	{
		array[b] = malloc(sizeof(int) * width);
		if (array[b] == NULL)
		{
			for (j = b; j >= 0; j--)
			{
				free(array[j]);
			}
			free(array);
			return (NULL);
		}
	}
	for (b = 0; b < height; b++)
	{
		for (j = 0; j < width; j++)
		{
			array[b][j] = 0;
		}
	}
	return (array);
}
