#include "hash_tables.h"
/**
 * hash_table_delete - delete hash table
 * @ht: hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *temp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
		node = ht->array[i];
		if (node)
		{
			temp = node->next;
			free(node->key);
			free(node->value);
			free(temp);
			node = temp;
		}
		}
	}
	free(ht->array);
	free(ht);
}
