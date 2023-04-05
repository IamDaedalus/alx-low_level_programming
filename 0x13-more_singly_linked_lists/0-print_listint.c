#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
  * print_listint - prints the number of node in a linked list
  * @h: the head node
  * Return: returns the number of elements
  */
size_t print_listint(const listint_t *h)
{
	size_t elements = 0;
	const listint_t *current;

	if (h == NULL)
		return (-1);
	else if (h != NULL)
		current = h;

	while (current !=  NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		elements++;
	}

	return (elements);
}
