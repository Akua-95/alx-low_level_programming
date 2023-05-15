#include "main.h"
#include <stdlib.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char
 * @size: the size of array
 * @c: to assign char
 *
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

		for (unsigned int a = 0; a < size; a++)
		{
			s[a] = c;
		}
	return (s);
}
