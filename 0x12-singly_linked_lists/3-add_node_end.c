#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a node at the end of a linked list
 * @head: the head of the linked list
 * @str: the string for the new node
 * Return: returns a pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *cur_node = NULL;
	list_t *node = malloc(sizeof(list_t));

	if (!node)
		return (NULL);

	node->str = strdup(str);
	node->len = strlen(str);
	node->next = NULL;

	if (!*head)
		*head = node;
	else
	{
		cur_node = *head;
		while (cur_node->next)
			cur_node = cur_node->next;

		cur_node->next = node;
	}

	return (node);
}
