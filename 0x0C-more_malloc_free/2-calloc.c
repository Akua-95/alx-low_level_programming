#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of elements
 * @size: size of each elements
 *
 * Return: a pointer to the allocated memory
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *d;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	d = malloc(size * nmemb);

	if (d == NULL)
		return (NULL);

	for (a = 0; a < (nmemb * size); a++)
		d[a] = 0;

	return (d);
}

