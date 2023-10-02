#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated wih a key
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
	{
		if (strcmp(ht->array[idx]->key, key) == 0)
			return (ht->array[idx]->value);
	}
	return (NULL);
}
