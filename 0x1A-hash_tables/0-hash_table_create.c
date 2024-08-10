#include "hash_tables.h"
/**
 * hash_table_create - create hash table
 * @size: size of array
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = (hash_table_t *)malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (!table)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_table_t *) * size);
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);


}
