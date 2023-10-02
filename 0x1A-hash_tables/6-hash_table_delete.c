#include "hash_tables.h"
/**
 * hash_table_delete - deletes hash table
 * @ht: hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *p, *next;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
		p = ht->array[i];
		while (p)
		{
			next = p->next;
			free(p->value);
			free(p->key);
			free(p);
			p = next;
		}
		}
	}
	free(ht->array);
	free(ht);
}
