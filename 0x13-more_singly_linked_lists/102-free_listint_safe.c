#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list
 * linked list
 * @h: the first node in the linked list
 *
 * Returns: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *tem;
	int dif;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		dif = *h - (*h)->next;
		if (dif > 0)
		{
			tem = (*h)->next;
			free(*h);
			*h = tem;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;
	return (len);
}
