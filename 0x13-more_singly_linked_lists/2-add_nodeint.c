#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * add_nodeint - adds a new node to a linked list
  * @head: the linked list in question
  * @n: value to initiliase the new node with
  * Return: returns the new node
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
	}
	else if (head != NULL)
	{
		new->next = *head;
		*head = new;
	}

	return (new);
}
