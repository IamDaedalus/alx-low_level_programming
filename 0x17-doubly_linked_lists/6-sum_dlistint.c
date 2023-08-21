#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_dlistint - adds all the values of each node in the linked list
 * @head: the head of the linked list
 * Return: returns the sum of all values in the list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *cur = NULL;
	int sum = 0;

	if (head)
	{
		while (head)
		{
			sum += head->n;
			cur = head->next;
			head = cur;
		}
	}

	return (sum);
}
