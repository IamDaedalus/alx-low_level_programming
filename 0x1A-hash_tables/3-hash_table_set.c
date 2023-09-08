#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int ret = 1;
	unsigned long int idx = 0;
	hash_node_t *new = malloc(sizeof(hash_node_t));

	(void)value;
	if (!ht || (strlen(key) == 0))
		return (ret);

	idx = key_index((const unsigned char *)key, ht->size);
	if (!ht->array[idx])
	{
		printf("this location is free. proceed...\n");
		new->value = strdup(value);
		new->key = strdup(key);
		new->next = NULL;
		ht->array[idx] = new;
	}
	else
	{
		printf("this location is not free. create new list...\n");
	}


	return (ret);
}
