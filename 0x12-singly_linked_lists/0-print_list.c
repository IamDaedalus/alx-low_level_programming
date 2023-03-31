#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
  * print_list - prints number of nodes in a linked list
  * @h: the linked list
  * Return: the number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	if (h == NULL)
		return (0);

	/* check if the node exists and if it does do the computations */
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		/* this line handles changing the current node to the next */
		h = h->next;
		count++;
	}

	return (count);
}
