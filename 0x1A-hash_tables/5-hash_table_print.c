#include "hash_tables.h"
/**
 * hash_table_print - prints hash table
 * @ht: hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i, flag = 0;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			node = ht->array[i];
		if (node && flag == 1)
			printf(", ");
		while (node)
		{
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			if (node != NULL)
				printf(", ");
		}
		flag = 1;
		}
	}
	printf("}");
	printf("\n");
}
