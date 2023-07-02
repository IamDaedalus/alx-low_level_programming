#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a node to an existing linked list
 * @head: the head of the linked list
 * @str: the string to use for the new node
 * Return: returns a pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *cur_node;
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
		*head = node;
		(*head)->next = cur_node;
	}

	return (node);
}
