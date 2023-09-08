#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates a new hash table of size "size"
 * @size: the size of the hash table
 * Return: returns the address of the tabele we just created
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	if (!new)
		return (NULL);

	new->size = size;
	new->array = malloc(sizeof(new->array) * size);
	if (!new->array)
		return (NULL);

	while (i < size)
	{
		new->array[i] = NULL;
		i++;
	}
	return (new);
}
