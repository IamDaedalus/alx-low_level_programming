#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - adds an element into a hash table
 * @ht: the hash table into which we're inserting an element
 * @key: the key of the hash node
 * @value: the value of the hash node
 * Return: returns 1 for success and 0 for failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *new = malloc(sizeof(hash_node_t));

	if (!ht || (strlen(key) == 0))
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	new->value = strdup(value);
	new->key = strdup(key);
	new->next = NULL;

	if (!ht->array[idx])
		ht->array[idx] = new;
	else
	{
		hash_node_t *p = ht->array[idx];

		ht->array[idx] = new;
		ht->array[idx]->next = p;
	}

	return (1);
}
