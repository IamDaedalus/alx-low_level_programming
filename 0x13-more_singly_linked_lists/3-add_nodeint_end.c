#include "lists.h"
#include <c++/13.1.1/variant>
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node to the end of a linked list
 * @head: the head of the linked list
 * @n: the value for the new node
 * Return: the address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *cur_node = NULL;

	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (!*head)
		*head = node;
	else
	{
		cur_node = (*head);

		while (cur_node->next)
			cur_node = cur_node->next;

		cur_node->next = node;
	}

	return (node);
}
