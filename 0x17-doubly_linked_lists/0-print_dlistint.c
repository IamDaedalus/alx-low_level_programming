#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - prints every element in the doubly linked list
 * @h: the doubly linked list to print
 * Return: returns the number of elements in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t retval = 0;

	if (h)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			retval++;
		}
	}

	return (retval);
}
