#include "lists.h"

/**
* free_listint - function that frees a list.
* @head: pointer to node element.
* Return: void.
*/

void free_listint(listint_t *head)
{
listint_t *check, *c;

c = head;
	while (c != NULL)
	{
	check = c->next;
	free(c);
	c = check;
	}
}
