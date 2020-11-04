#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* delete_nodeint_at_index - function that deletes the node at index.
* @head: pointer to pointer of list type of listint_t.
* @index: position of where the node should be deleted.
* Return: 1 if succeeded, -1 if it failed.
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *h = *head, *tmp = NULL;
unsigned int count = 0;

	if ((*head) && count == index)
	{
		(*head) = h->next;
		free(h);
		return (1);
	}
	while (h)
	{
		if (count == index - 1)
		{
			tmp = h->next;
			free(h->next);
			h->next = tmp->next;
			return (1);
		}
		h = h->next;
		count++;
		if (!h)
			return (-1);
	}
	return (-1);
}
