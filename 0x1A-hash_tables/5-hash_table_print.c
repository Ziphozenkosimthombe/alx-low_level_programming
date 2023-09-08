#include "./hash_tables.h"

/**
 * hash_table_print - the print of the hash table.
 * @ht: hash table pointer to be printed.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int a = 0;
	unsigned char comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (; a < ht->size; a++)
	{
		if (ht->array[a] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			node = ht->array[a];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
