#include "lists.h"
/**
* dlistint_len - function that returns the number of elements in a
* linked dlistint_t list.
* @h: dlistint_t header pointer
* Return: number of nodes
**/
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
