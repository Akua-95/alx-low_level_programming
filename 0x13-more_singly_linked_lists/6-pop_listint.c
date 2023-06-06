#include "lists.h"
#include <stdlib.h>

/**
 *pop_listint - deletes the head node of a listint_t
 *@head: pointer to the first element
 *Return: 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tem;
	int count;

	if (!head || !*head)
		return (0);

	count = (*head)->n;
	tem = (*head)->next;
	free(*head);
	*head = tem;

	return (count);
}
