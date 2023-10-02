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
	hash_table_t *h = ht;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
		p = ht->array[i];
		while (p)
		{
			next = p->next;
			free(p->key);
			free(p->value);
			free(p);
			p = next;
		}
		}
	}
	free(h->array);
	free(h);
}
