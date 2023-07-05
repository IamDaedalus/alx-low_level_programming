#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a node to the head of a linked list
 * @head: the head of the node to add to
 * @n: the value for the new node
 * Return: returns the address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp_node;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!(*head))
		(*head) = new_node;
	else
	{
		temp_node = *head;
		*head = new_node;
		new_node->next = temp_node;
	}

	return (new_node);
}
