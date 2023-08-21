#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a node at the head of a list
 * @head: the current head of the list
 * @n: the value of the new node
 * Return: returns the address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *temp = NULL;

	if (head)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (!new_node)
			return (NULL);
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = NULL;

		temp = *head;
		new_node->next = temp;
		*head = new_node;
	}

	return (new_node);
}
