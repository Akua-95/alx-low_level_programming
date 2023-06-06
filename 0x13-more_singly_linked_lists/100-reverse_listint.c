#include "lists.h"

/**
 **reverse_listint -  function that reverses a listint_t linked list
 *@head: first node in the list
 *
 * Returns: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previ = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previ;
		previ = *head;
		*head = next;
	}

	*head = previ;

	return (*head);
}
