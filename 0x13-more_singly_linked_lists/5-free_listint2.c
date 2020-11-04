#include "lists.h"
/**
* free_listint2 - function that frees a list.
* @head: pointer to a list.
* Return: void.
*/

void free_listint2(listint_t **head)
{
listint_t *c;

	if (head == NULL)
	return;
		while (*head)
		{
		c = *head;
		*head = (*head)->next;
		free(c);
		}
head = NULL;
}
