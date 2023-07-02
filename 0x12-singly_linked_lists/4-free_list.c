#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a linked list
 * @head: the linked list to free from memory
 */
void free_list(list_t *head)
{
	list_t *cur_node;
	list_t *temp_node;

	if (head)
	{
		cur_node = head;

		while (cur_node)
		{
			temp_node = cur_node->next;
			free(cur_node->str);
			free(cur_node);

			cur_node = temp_node;
		}
	}
}
