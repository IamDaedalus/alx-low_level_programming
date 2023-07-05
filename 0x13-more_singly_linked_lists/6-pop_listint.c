#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - returns the value of the head and removes
 * it from the linked list
 * @head: the head of the linked list
 * Return: return the value of the head value
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = NULL;
	int data = 0;

	if (*head)
	{
		temp = *head;
		data = temp->n;

		*head = (*head)->next;

		free(temp);
	}

	return (data);
}

