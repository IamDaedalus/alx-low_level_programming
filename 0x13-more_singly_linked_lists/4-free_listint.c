#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * free_listint - frees a linked list from memory
  * @head: the linked list
  */
void free_listint(listint_t *head)
{
	listint_t *current, *next;

	if (head != NULL)
	{
		current = head;
		while (current != NULL)
		{
			next = current->next;
			free(current);
			current = next;
		}
	}
}
