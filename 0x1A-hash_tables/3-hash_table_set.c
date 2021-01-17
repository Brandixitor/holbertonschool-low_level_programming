#include "hash_tables.h"

/**
* hash_table_set - function that adds an element to the hash table.
* @ht: the hash table to add or update the key/value to
* @key: is the key so the key can not be an empty string
* @value: is the value associated with the key.
* value must be duplicated. value can be an empty string
* Return: 1 is succeed otherwise 0
**/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t **head = NULL;
	hash_node_t *tmp = NULL;
	hash_node_t *new = NULL;
	char *dval = "";
	unsigned long int index = 0;

	if (!key || strlen(key) == 0 || ht == NULL || ht->array == NULL)
		return (0);

	head = ht->array;
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	if (strlen(value) > 0)
		dval = strdup(value);
	new->key = strdup(key);
	new->value = dval;
	new->next = NULL;

	index = key_index((unsigned char *)new->key, ht->size);
	if (head[index] == NULL)
		head[index] = new;
	else
	{
			tmp = head[index];
			while (head[index])
			{
				if (strcmp(head[index]->key, new->key) == 0)
				{
					free(head[index]->value);
					free(new->value);
					free(new->key);
					free(new);
					head[index]->value = dval;
					return (1);
				}
				head[index] = head[index]->next;
			}
			new->next = tmp;
			head[index] = new;
	}
	return (1);
}
