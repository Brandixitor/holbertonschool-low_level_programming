#include "hash_tables.h"

/**
* hash_table_print - function that prints a hash table.
* @ht: the hash table
**/
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	unsigned int b = 0;
	unsigned int nb = 0;
	hash_node_t **array = NULL;
	hash_node_t *tmp = NULL;

	if (!ht)
		return;
	array = ht->array;
	printf("{");
	while (i < ht->size)
	{
		if (array[i])
			nb++;
		i++;
	}

	for (i = 0; i < ht->size; i++)
	{
		if (array[i])
		{
			tmp = array[i];
			while (array[i])
			{
				printf("'%s': '%s'", array[i]->key, array[i]->value);
				array[i] = array[i]->next;
				if (array[i])
					printf(", ");
			}
			if (b != nb - 1)
				printf(", ");
			array[i] = tmp;
			b++;
		}
	}

	printf("}\n");
}
