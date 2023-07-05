#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a linked list and sets its head to NULL
 * @head: the head of the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = NULL;

	if (!*head)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	free(*head);

	*head = NULL;
}
