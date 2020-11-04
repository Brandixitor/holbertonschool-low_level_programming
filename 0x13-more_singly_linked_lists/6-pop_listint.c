#include "lists.h"
/**
* pop_listint - function that deletes the head node.
* @head: pointer to a list.
* Return: head node data.
*/
int pop_listint(listint_t **head)
{
listint_t *t;
int n;

t = *head;
	if (t == NULL)
	return (0);
		*head = t->next;
		n = t->n;
		free(t);
return (n);
}
