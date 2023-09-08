#include "hash_tables.h"

/**
 * hash_table_get - the value that is associated with,
 * a key in a hash table.
 * @ht: hash table pointer.
 * @key: value of the key.
 *
 * Return: NULL if key can't match
 * otherwise the value associated with the key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int indx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	indx = key_index((const unsigned char *)key, ht->size);
	if (indx >= ht->size)
		return (NULL);

	node = ht->array[indx];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
