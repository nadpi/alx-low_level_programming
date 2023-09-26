#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t **hashT;

	*hashT = malloc(sizeof(hash_table_t));
	(*hashT)->size = size;

	if (!*hashT)
		return (NULL);

	return (*hashT);
}
