#include "main.h"
#include <stdlib.h>
#include <stdlib.h>

/**
 * *create_array - function that creates an array of chars,
 * and initializes it with a specific char
 * @size: the size of array
 * @c: to assign char
 *
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
	return (NULL);

	while (size--)
	array[size] = c;
		return (array);
}
