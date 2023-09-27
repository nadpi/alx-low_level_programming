#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: the key
 * @value: value
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int idx;
	struct hash_node_s *newnode = malloc(sizeof(struct hash_node_s)), *curr;

	if (!newnode || !key || !value)
		return (0);

	idx = hash_djb2((const unsigned char *)key) % ht->size;
	curr = ht->array[idx];
	strcpy(newnode->value, value);
	strcpy(newnode->key, key);

	if (!curr)
		ht->array[idx] = newnode;
	else
	{
	newnode->next = ht->array[0];
	ht->array[0] = newnode;
	}

	return (1);

}
