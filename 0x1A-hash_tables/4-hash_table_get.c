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
	hash_node_t *curr;

	if (!ht || !key)
		return (NULL);

	idx = hash_djb2((const unsigned char *)key) % ht->size;
	curr = ht->array[idx];

	while (curr)
	{
		if (strcmp(key, curr->key) == 0)
			return (curr->value);
		curr = curr->next;
	}
	return (NULL);
}
