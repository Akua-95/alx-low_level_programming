#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: first node
 * @index: index node
 *
 * Return: NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *count = head;
	unsigned int j = 0;

	while (count && j < index)
	{
		count = count->next;
		j++;
	}
	return (count ? count : NULL);
}
