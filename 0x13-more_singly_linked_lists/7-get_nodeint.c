#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns a node at index
 * @head: the head of the list to search
 * @index: the index of the node to find
 * Return: returns the node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cur_index = 0;
	listint_t *node = NULL;
	listint_t *cur_node = NULL;

	if (!head)
		return (NULL);

	cur_node = head;
	while (cur_node)
	{
		if (cur_index == index)
		{
			node = cur_node;
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
