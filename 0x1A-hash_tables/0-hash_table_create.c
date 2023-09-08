#include "hash_tables.h"

/**
 * hash_table_create - The function to creates the hash table
 * @size: the array size.
 *
 * Return: If an error occurs - NULL
 * Otherwise - a pointer to the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_tables;
	unsigned long int a;

	h_tables = malloc(sizeof(hash_table_t));

	if (h_tables == NULL)
		return (NULL);

	h_tables->size = size;
	h_tables->array = malloc(sizeof(hash_node_t *) * size);

	if (h_tables->array == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
	{
		h_tables->array[a] = NULL;
	}

	return (h_tables);
}
