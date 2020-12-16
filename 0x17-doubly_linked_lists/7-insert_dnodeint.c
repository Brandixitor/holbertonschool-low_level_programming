#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a new node
 * at a given position.
 * @h: dlistint_t header pointer to pointer
 * @idx: Position where the new node will be inserted
 * @n: new value to insert in the new node
 * Return: adress of the new element or NULL if it failed
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0, len = 0;
	dlistint_t *new = NULL, *tmp = NULL;

	if (!h || (idx > 0 && *h == NULL))
		return (NULL);
	tmp = *h;
	for (len = 0; tmp; len++, tmp = tmp->next)
		;
	if (idx > len)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	tmp = *h;
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (idx == len)
		return (add_dnodeint_end(h, n));
	if (*h == NULL || idx == 0)
		return (add_dnodeint(h, n));
	while (tmp->next)
	{
		if (i == idx - 1)
		{
			new->prev = tmp;
			new->next = tmp->next;
			tmp->next->prev = new;
			tmp->next = new;
		}
		i++;
		tmp = tmp->next;
	}
	return (new);
}
