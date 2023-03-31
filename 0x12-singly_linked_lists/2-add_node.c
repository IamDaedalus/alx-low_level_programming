#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
  * add_node - adds a node at the beginning of a list
  * @head: the linked list to add in front of
  * @str: the string to use
  * Return: returns the new node
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	const char *s = str;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	if (str)
		s = strdup(str);

	new_node->str = (char *)s;
	new_node->len = _strlen(s);
	new_node->next = *head;
	*head = new_node;

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
