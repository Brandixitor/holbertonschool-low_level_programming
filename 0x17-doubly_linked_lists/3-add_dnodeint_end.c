#include "lists.h"
/**
* add_dnodeint_end - function that adds a new node at the end of
* a dlistint_t list.
* @head: dlistint_t header pointer to pointer
* @n: new value to insert in the new node
* Return: adress of the new element or NULL if it failed
**/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *tmp = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	new->prev = tmp;
	tmp->next = new;
	return (new);
}
