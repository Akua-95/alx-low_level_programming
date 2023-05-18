#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimum values stored
 * @max: maximum values stored
 *
 * Return: the pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int *a, b = 0;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(*a) * ((max - min) + 1));

	if (a == NULL)
		return (NULL);

	for (b = 0; min <= max; b++, min++)
		a[b] = min;

	return (a);
}
