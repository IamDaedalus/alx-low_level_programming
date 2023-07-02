#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

/**
 * print_list - prints elements of a linked list and returns count
 * @h: the linked list to traverse
 * Return: returns the total number of elements in the linked list
 */
size_t print_list(const list_t *h)
{
	size_t len = 0;

	if (!h)
		return (-1);

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		len++;
	}

	return (len);
}
