#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
  * listint_len - prints the number of node in a linked list
  * @h: the head node
  * Return: returns the length of the linked list
  */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;
	const listint_t *current;

	if (h == NULL)
		return (NULL);
	else if (h != NULL)
		current = h;

	while (current !=  NULL)
	{
		current = current->next;
		elements++;
	}

	return (elements);
}
