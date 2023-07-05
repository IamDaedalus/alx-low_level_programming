#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a linked list from memory
 * @h: the linked list
 */
void free_listint(listint_t *h)
{
	listint_t *temp = NULL;

	if (!h)
		return;

	while (h)
	{
		temp = h->next;
		free(h);
		h = temp;
	}
}
