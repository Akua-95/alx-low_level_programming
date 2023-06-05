#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - function that returns the number of elements
 * in a linked listint_t list
 * @h: type listint_t to traverse
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t countt = 0;

	while (h != NULL)
	{
		countt++;
		h = h->next;
	}

	return (countt);
}
