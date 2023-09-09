#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - frees a hash table from memory
 * @ht: the hash table to free from memory
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *c = NULL, *n = NULL;
	
	if (ht)
	{
		while (idx < ht->size)
		{
			if (ht->array[idx])
			{
				c = ht->array[idx];

				while (c)
				{
					n = c->next;
					free(c->value);
					free(c->key);
					free(c);
					c = n;
				}
			}
			idx++;
		}
	}

	free(ht->array);
	free(ht);
}
