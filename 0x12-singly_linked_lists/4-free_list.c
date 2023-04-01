#include "lists.h"
#include <stdlib.h>

/**
  * free_list - frees a linked list of type list_t
  * @head: the list to free
  */
void free_list(list_t *head)
{
	list_t *current, *next;

	if (head != NULL)
	{
		current = head;

		while (current != NULL)
		{
			next = current->next;
			free(current->str);
			free(current);

			current = next;
		}
	}
}
