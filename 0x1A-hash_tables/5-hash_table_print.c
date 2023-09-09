#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints the contents of a hash table
 * @ht: the hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *c = NULL;
	int printed = 0;

	if (!ht)
	{
		printf("{}\n");
		return;
	}

	printf("{");
	while (i < ht->size)
	{
		c = ht->array[i];

		while (c)
		{
			if (printed)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			printed = 1;
			c = c->next;
		}
		i++;
	}

	printf("}\n");
}

