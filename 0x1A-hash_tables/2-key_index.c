#include "hash_tables.h"
/**
 * key_index - a function that gives you the index of a key.
 * @key: key
 * @size: size
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	int keyy;

	hash = hash_djb2(key);
	keyy = (hash % size);

	return (keyy);
}
