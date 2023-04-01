#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
  * add_node_end - returns the pointer to a node at the end of the list
  * @head: the node to use as a starting point
  * @str: the string to populate the node with
  * Return: returns the pointer of the node
  */
list_t *add_node_end(list_t **head, const char *str)
{
	/* node to return and node to traverse with */
	list_t *new_node, *current_node;
	char *s;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* duplicate the string and check if it's valid */
	s = strdup(str);
	if (s == NULL)
		return (NULL);

	new_node->str = s;
	/* I've alread defined this in the header no need to do it again */
	new_node->len = _strlen(s);
	/* since it'll be at the end there's no need assign next to anything */
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		current_node = *head;
		/* similar to what we did in the task two to traverse the list */
		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}
		/* once we hit the end assign current node to the new node */
		current_node->next = new_node;
	}

	return (new_node);
}

/**
  * _strlen - returns the length of a string
  * @str: the string to get the length of
  * Return: returns the length
  */
int _strlen(const char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	return (len);
}
