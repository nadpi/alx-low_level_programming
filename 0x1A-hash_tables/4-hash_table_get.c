#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 * Return: the value associated with the element, or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;

	idx = hash_djb2((const unsigned char *) key);
	if (ht->array[idx]->key)
		return (ht->array[idx]->value);
	else
		return (NULL);
}
