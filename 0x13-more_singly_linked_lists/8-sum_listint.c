#include "lists.h"
/**
* sum_listint - function that returns the sum of element list.
* @head: pointer to the list.
* Return: integer.
*/
int sum_listint(listint_t *head)
{
int sum = 0;

	if (head == NULL)
	return (0);

		while (head->next)
		{
		sum += head->n;
		head = head->next;
		}
sum += head->n;
return (sum);
}
