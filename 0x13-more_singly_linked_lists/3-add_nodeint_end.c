#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * add_nodeint_end - adds a node at the end of a linked list
  * @head: the linked list in question
  * @n: the value for the new node
  * Return: returns a pointer to the new node
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		/* new node is now head */
		*head = new;
	}
	else
	{
		current = *head;
		/* we check for next instead of current because we want to reach the end */
		while (current->next != NULL)
		{
			/* keep assigning current to the next of itself until we reach the end */
			current = current->next;
		}
		/* once at the end we just assign its next to the new node */
		current->next = new;
	}

	return (new);
}
