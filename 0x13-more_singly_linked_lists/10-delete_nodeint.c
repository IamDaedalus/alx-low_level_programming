#include "lists.h"
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
 * delete_nodeint_at_index - deletes a node at index
 * @head: the head of the linked list
 * @index: the index at which we remove the node
 * Return: returns -1 for failure and 0 for success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur_node = NULL;
	listint_t *prev_node = NULL;
	int result = -1;
	unsigned int cur_index = 0;

	if (*head == NULL)
		return (-1);

	if (index >= get_list_size(*head))
		return (-1);

	cur_node = *head;
	while (cur_node)
	{
		if (cur_index == index)
		{
			if (prev_node == NULL)
				*head = cur_node->next;
			else
				prev_node->next = cur_node->next;

			free(cur_node);
			result = 0;
			break;
		}

		prev_node = cur_node;
		cur_node = cur_node->next;
		cur_index++;
	}

	return (result);
}

