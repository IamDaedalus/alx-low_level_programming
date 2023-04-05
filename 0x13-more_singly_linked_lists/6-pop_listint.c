#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * pop_listint - removes the head node in a linked list and returns its value
  * @head: node in question
  * Return: returns the head node's data
  */
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	size_t head_node_data = 0;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		head_node_data = (*head)->n;
		new_head = (*head)->next;
		free(*head);
		*head = new_head;
	}

	return ((int)head_node_data);
}
