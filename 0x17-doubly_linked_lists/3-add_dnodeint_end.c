#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a node to the end of a doubly linked list
 * @head: the head of the doubly linked list
 * @n: the value of the new node
 * Return: returns the address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *temp = NULL;

	if (head)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (!new_node)
			return (NULL);

		new_node->n = n;
		new_node->prev = new_node->next = NULL;

		if (!*head)
			*head = new_node;
		else
		{
			temp = *head;
			while (temp->next)
				temp = temp->next;

			new_node->prev = temp;
			temp->next = new_node;
		}
	}

	return (new_node);
}
