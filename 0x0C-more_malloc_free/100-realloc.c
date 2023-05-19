#include "main.h"
#include <stdlib.h>

/**
 * _realloc -  function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory
 *
 * Return: pointer allocate new size memory, or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a;
	char *b;
	unsigned int k;

	if (ptr != NULL)
		a = ptr;
	else
	{return (malloc(new_size)); }

	if ((new_size == old_size)
			return (ptr);
	if (new_size == 0 && ptr != NULL)
	free(ptr);
	return (0);
	b = malloc(new_size);
	if (b == NULL)
	return (0);
	for (k = 0; k < (old_size || k < new_size); k++)
	{
		(b + k) = a[k];
	}
	free(ptr);
	return (b);
}
