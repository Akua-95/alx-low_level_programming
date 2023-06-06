#include "lists.h"

/**
 * sum_listint - function that returns the sum of all
 * the data (n) of a listint_t linked list
 * @head: first node
 *
 * Return: 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *count = head;
	int i = 0;

	while (count)
	{
		i += count->n;
		count = count->next;
	}

	return (i);
}
