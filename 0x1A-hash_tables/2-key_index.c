#include "hash_tables.h"

/**
 * key_index - founding the index which the key, values shouldbe stored.
 * 		in the array of the h_table.
 * @key: the index key.
 * @size: the array size of the hash_table
 *
 * Return: index of key.
 * Description: we will use djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
