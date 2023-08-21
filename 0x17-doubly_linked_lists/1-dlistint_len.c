#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * dlistint_len - calculates the number of elements in a list
 * @h: the linked list
 * Return: returns the numebr of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t retval = 0;

	if (h)
	{
		while (h)
		{
			h = h->next;
			retval++;
		}
	}

	return (retval);
}
