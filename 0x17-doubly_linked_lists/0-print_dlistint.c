#include "lists.h"
/**
* print_dlistint - function that prints all the elements of a dlistint_t list.
* @h: dlistint_t header pointer
* Return: number of nodes
**/
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
