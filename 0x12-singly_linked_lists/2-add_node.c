#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t
 * @head: pointer to a pointer to the head
 * @str: string to duplicate in the node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add new_node;
	unsigned int i = 0;

	add new_node = malloc(sizeof(list_t));

	if (add new_node == NULL)
		return (NULL);
	if (add new_node->str == NULL)
	{
		free(add new_node);
		return (NULL);
	}
	add new_node->str = strdup(str);
	add new_node->i = i;
	(*head) = add new_node;
	add new_node->next = *(head);

	return (add new_node);
}
