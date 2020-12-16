#include "lists.h"
/**
* sum_dlistint - function that returns the sum of all the data (n)
* of a dlistint_t linked list.
* @head: dlistint_t header pointer
* Return: sum of node->n
**/
int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	while (head)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
