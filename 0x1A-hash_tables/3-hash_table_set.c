#include "hash_tables.h"


/**
 * hash_table_set - the element in the hash_table will be updated
 * @ht: the hash_table pointer
 * @key: the to tto be added
 * @value: The associated value with  the key.
 *
 * Return:1 if it succeeded,
 * 		otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *copy_value;
	unsigned long int indx, a;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	copy_value = strdup(value);
	if (copy_value == NULL)
		return (0);

	indx = key_index((const unsigned char *)key, ht->size);
	for (a = indx; ht->array[a]; a++)
	{
		if (strcmp(ht->array[a]->key, key) == 0)
		{
			free(ht->array[a]->value);
			ht->array[a]->value = copy_value;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(copy_value);
		return (0);
	}
	new->value = copy_value;
	new->next = ht->array[indx];
	ht->array[indx] = new;

	return (1);
}
