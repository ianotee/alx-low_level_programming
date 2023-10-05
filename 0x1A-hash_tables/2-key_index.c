#include "hash_tables.h"

/**
 * key_index - Get the index
 * @key: The key to the index.
 * @size: The size of array.
 * Return: The index key.
 * Description:It uses algorithmn
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
