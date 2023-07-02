#include "lists.h"
#include <stddef.h>

/**
 * list_len - traverses a linked list and returns it length
 * @h: the head of the linked list
 * Return: returns the total number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (!h)
		return (-1);

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
