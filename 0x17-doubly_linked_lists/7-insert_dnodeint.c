#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at an index
 * @head: the head of the linked list
 * @idx: the index to insert at
 * @n: the value for the new node
 * Return: returns the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(
		dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *cur = NULL;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		if (*head)
			(*head)->prev = new_node;
		*head = new_node;
		return (new_node);
	}
	cur = *head;
	while (cur && count < idx)
	{
		cur = cur->next;
		count++;
	}
	if (count == idx)
	{
		new_node->next = cur;
		new_node->prev = cur->prev;

		if (cur->prev)
			cur->prev->next = new_node;
		cur->prev = new_node;
	}
	else
	{
		free(new_node);
		return (NULL);
	}
	return (new_node);
}

