#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of a dlistint_t
 * linked list.
 * @head: dlistint_t header pointer
 * @index: Position where the new node will be returned
 * Return: adress of the founded node otherwise NULL
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp = NULL;

	if (head == NULL)
		return (NULL);
	tmp = head;
	while (tmp)
	{
		if (i == index)
			return (tmp);
		i++;
		tmp = tmp->next;
	}
	return (NULL);
}
