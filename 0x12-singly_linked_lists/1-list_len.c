#include "lists.h"
#include <stddef.h>

/**
  * list_len - lists the number of elements in a node
  * @h: the linked list
  * Return: returns number of elements
  */
size_t list_len(const list_t *h)
{
	size_t num_of_elements = 0;

	while (h != NULL)
	{
		num_of_elements++;
		h = h->next;
	}

	return (num_of_elements);
}

