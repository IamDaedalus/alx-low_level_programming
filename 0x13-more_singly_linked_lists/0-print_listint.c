#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: the list
 * Return: returns the number of elements in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *head = h;

	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
		count++;
	}

	return (count);
}
