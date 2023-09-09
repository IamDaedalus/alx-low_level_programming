#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_get - retrieves a value from a hash table based
 * on its key
 * @ht: the hashtable to search
 * @key: the key of the value we're looking for
 * Return: returns the value of the key speicified if foudn
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *c = NULL;
	unsigned long int idx = 0;

	if (!ht || !key || (strlen(key) == 0))
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);

	c = ht->array[idx];
	while (c)
	{
		if (strcmp(key, c->key) == 0)
			return (c->value);

		c = c->next;
	}

	return (NULL);
}
