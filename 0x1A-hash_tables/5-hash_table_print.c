#include "hash_tables.h"
/**
 * hash_table_print - prints hash tables
 * @ht: hash tables
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, cnt = 0;

	if (!ht)
		exit (1);

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
			cnt++;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
		printf("'%s' : '%s'", ht->array[i]->key, ht->array[i]->value);
		if (cnt > 1)
		{
		printf(", ");
		cnt--;
		}
		}
	}
	printf("}\n");
}
