#include "hash_tables.h"

/**
* hash_table_delete - function that deletes a hash table
* @ht: hash table
**/
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *tmp = NULL;

	if (!ht)
		return;
	while (i < ht->size)
	{
		if (ht->array[i])
		{
			while (ht->array[i])
			{
				tmp = ht->array[i];
				free(ht->array[i]->key);
				free(ht->array[i]->value);
				ht->array[i] = ht->array[i]->next;
				free(tmp);
			}
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
