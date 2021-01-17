#include "hash_tables.h"

/**
* hash_table_get - function that retrieves a value associated with a key.
* @ht: he hash table
* @key: the key we want to retrieve
* Return: the value associated with the element, or NULL if
* key couldn’t be found
**/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp = NULL;
	unsigned long int index;
	char *value = "";

	if (!ht || !ht->array || !key || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (ht->array[index])
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			value = ht->array[index]->value;
			ht->array[index] = tmp;
			return (value);
		}
		ht->array[index] = ht->array[index]->next;
	}
	ht->array[index] = tmp;
	return (NULL);
}
