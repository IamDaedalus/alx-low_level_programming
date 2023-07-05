#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * get_list_size - returns the number of elements in a list
 * @head: the linked list to check its size
 * Return: returns number of elements
 */
size_t get_list_size(listint_t *head)
{
	size_t size = 0;

	while (head)
	{
		size++;
		head = head->next;
	}

	return (size);
}

/**
 * insert_nodeint_at_index - this inserts a node at index idx
 * @head: the head of the linked list
 * @idx: the index to insert at
 * @n: the value for the new node
 * Return: returns the new node's address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = NULL;
	listint_t *cur_node = NULL;
	listint_t *temp_node = NULL;
	unsigned int cur_index = 0;

	if (!*head)
		return (NULL);

	if (idx > get_list_size(*head))
		return (NULL);

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	cur_node = *head;
	while (cur_node)
	{
		if (cur_index == idx)
		{
			temp_node = cur_node->next;
			node->next = temp_node;
			cur_node->next = node;
			break;
		}
		else
		{
			cur_node = cur_node->next;
		}
		cur_index++;
	}

	return (node);
}
