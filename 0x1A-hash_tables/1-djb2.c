#include "hash_tables.h"

/**
 * hash_djb2 - Hash function.
 * @str: The hash string.
 * Return: The hash
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int count;

	hash = 5381;
	while ((count = *str++))
		hash = ((hash << 5) + hash) + count; /* hash * 33 + count */

	return (hash);
}
