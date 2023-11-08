#include "hash_tables.h"
/**
 * hash_table_delete - delete hash table
 * @ht: hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node)
		{
			free(node->key);
			free(node->value);
			free(node);
		}
	}
	free(ht->array);
	free(ht);
}
