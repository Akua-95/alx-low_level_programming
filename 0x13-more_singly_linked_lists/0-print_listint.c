#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: listint_t to print
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t countt = 0;

	while (h)
	{
		printf("%d\n", h->n);
		countt++;
		h = h->next;
	}

	return (countt);
}