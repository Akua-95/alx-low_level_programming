#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char
 * @size: the size of array
 * @c: to assign char
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *c;

	if (size == 0)
		return (NULL);
	c = malloc(size *sizeof(char));

	if (c == NULL)
		return (NULL);

		for (unsigned int a = 0; a < size; a++)
		{
			array[a] = c;
		}
	return (array);
}
