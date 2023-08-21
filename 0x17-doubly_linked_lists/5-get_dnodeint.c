#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * get_dnodeint_at_index - gets the node at a specified index
 * @head: the head of the linked list
 * @index: the index at which to retrieve the element
 * Return: returns the node at index in linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = NULL;
	dlistint_t *temp = NULL;
	unsigned int count = 0;

	if (head)
	{
		while (head)
		{
			temp = head;
			head = temp->next;

			if (count == index)
			{
				node = temp;
				break;
			}
			count++;
		}
	}

	return (node);
}
