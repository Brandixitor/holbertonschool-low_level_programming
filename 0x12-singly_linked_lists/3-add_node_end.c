#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
* add_node_end - function that adds a new node at the end of a list_t list.
* @head: pointer to head of list_t.
* @str: new node string.
* Return: pointer.
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *h;
unsigned int sum = 0;

	new = malloc(sizeof(list_t));
	h = *head;
	if (!new || !str)
		return (NULL);
	for (sum = 0; str[sum]; sum++)
		;
	new->str = strdup(str);
	new->len = sum;
	new->next = NULL;
	if (h == NULL)
	{
		*(head) = new;
		return (new);
	}
	while (h->next != NULL)
	{
		h = h->next;
	}
	h->next = new;
	return (new);
}
