#include "hash_tables.h"
/**
 * hash_table_print - prints hash tables
 * @ht: hash tables
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, cnt = 0;
	hash_node_t *p;

	if (!ht)
		exit(1);

	for (i = 0; i < ht->size; i++)
	{
	p = ht->array[i];
		while (p)
		{
			cnt++;
			p = p->next;
		}
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		p = ht->array[i];
		if (p)
		{
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			if (cnt > 1)
			{
				printf(", ");
				cnt--;
			}
			p = p->next;
		}
	}
	printf("}\n");
}
