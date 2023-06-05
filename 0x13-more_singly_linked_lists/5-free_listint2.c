#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list.
 * @head: listint_t list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		*head = (*head)->next;
		free(*head);
		current = *head;
	}

	*head = NULL;
}
