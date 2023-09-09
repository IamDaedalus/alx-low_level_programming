#include "hash_tables.h"

/**
 * key_index - returns the index of the key
 * @key: the key to return its index
 * @size: the size of the hash table
 * Return: the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/**
	 *
	 * unsigned long int idx = 0;
	 * unsigned long int hash = hash_djb2(key);
	 * idx = hash % size;
	 */
	return (hash_djb2(key) % size);
}
