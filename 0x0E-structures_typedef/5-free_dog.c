#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - function that frees dogs allocated memory
 * @d: dog
 * Return: 0
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
