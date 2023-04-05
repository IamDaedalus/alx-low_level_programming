#include "lists.h"

listint_t *get_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *need;
	int current_index = 0;

	if (index > listint_len(*head))
		return (NULL);

	if (*head == NULL)
		return (NULL);
}
