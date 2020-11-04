#include "lists.h"
/**
* print_listint - prints all elements.
* @h: pointer.
* Return:size of the list.
*/
size_t print_listint(const listint_t *h)
{
size_t l = 0;

	while (h)
	{
	printf("%d\n", h->n);
	l++;
	h = h->next;
	}
return (l);
}
