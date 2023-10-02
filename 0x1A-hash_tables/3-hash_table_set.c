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
	hash_node_t *newnode, *curr;

	if (!ht || !key)
		return (0);

	newnode = malloc(sizeof(hash_node_t));
	if (!newnode)
		return (0);
	newnode->key = malloc(strlen(key) + 1);
	if (!newnode->key)
		return (0);
	newnode->value = malloc(strlen(value) + 1);
	if (!newnode->value)
		return (0);

	strcpy(newnode->key, key);
	newnode->value = strdup(value);
	idx = hash_djb2((const unsigned char *)key) % ht->size;
	curr = ht->array[idx];

	if (curr == NULL)
		ht->array[idx] = newnode;
	else
	{
		newnode->next = ht->array[idx];
		ht->array[idx] = newnode;
	}
	return (1);
}
