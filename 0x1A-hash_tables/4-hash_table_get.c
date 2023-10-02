#include "hash_tables.h"
/**
 * hash_tables_get - retrieves a value associated wih a key
 * @ht: hash table
 * @key: key
 * Return: the value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int idx;
	
	if (!ht || !key)
		return (NULL);

	idx = hash_djb2((const unsigned char *)key) % ht->size;
	if (!ht->array[idx])
		return (NULL);
	else
		return (ht->array[idx]->value);
}
