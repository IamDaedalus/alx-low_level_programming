#include "lists.h"
#include <stddef.h>
#include <stdio.h>

size_t print_list(const list_t *h)
{
	size_t count = 0;
	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		count++;
	}

	printf("[%d] %s\n", h->len, h->str);
	count++;

	return (count);
}
