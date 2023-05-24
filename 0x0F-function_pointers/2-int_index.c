#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function that searches for an integer
 * @size: the number of elements in the array
 * @array: array
 * @cmp: a pointer to the function to be used to compare values
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int b;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (b = 0; b < size; b++)
	{
		if (cmp(array[b]))
			return (b);
	}
	return (-1);
}
