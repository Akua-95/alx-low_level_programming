#include "lists.h"

/**
 * insert_nodeint - function that inserts a new node at a given position
 * @head: pointer to the first node
 * @idx: index of the list to add new node 
 * @n: data to insert in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;

