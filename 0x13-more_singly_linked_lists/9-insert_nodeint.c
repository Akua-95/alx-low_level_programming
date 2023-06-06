#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts
 * a new node at a given position
 * @head: pointer to the first node
 * @idx: index of the list to add new node
 * @n: data to insert in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *count = *head;
	unsigned int j;

	new_node =  malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (j = 0; count && j < idx; j++)
	{
		if (j == idx - 1)
		{
			new_node->next = count->next;
			count->next = new_node;
			return (new_node);
		}

		else
			count = count->next;
	}

	return (NULL);
}
