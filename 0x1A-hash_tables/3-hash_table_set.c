#include "hash_tables.h"
/**
 * hash_table_set - a function that adds an element to the hash table.
 * @key: key
 * @ht: hash table
 * @value: vlaue
 * Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int idx;
	char *dub;

	if (!key || key[0] == '\0')
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	idx = hash_djb2((const unsigned char *)key) % ht->size;
	node->key = malloc(strlen(key) + 1);
	node->value = malloc(strlen(value) + 1);

	if (!node->key || !node->value)
		return (0);

	strcpy(node->key, key);
	if (value)
	{
	dub = strdup(value);
	strcpy(node->value, dub);
	}
	else
		node->value = NULL;

	node->next = ht->array[idx];
	ht->array[idx] = node;
	return (1);
}
