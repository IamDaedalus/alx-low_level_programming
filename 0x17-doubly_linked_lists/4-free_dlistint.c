#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a doubly linked list
 * @head: the head of the linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cur = NULL;

	if (head)
	{
		while (head)
		{
			cur = head;
			head = cur->next;
			free(cur);
		}
		free(head);
	}
}
