#include "lists.h"
#include <stdlib.h>
/**
* free_list - function that frees a list_t list.
* @head: pointer to head of list_t
* Return: ...
*/
void free_list(list_t *head)
{
list_t *tmp;

	while (head)
	{
	tmp = head->next;
	free(head->str);
	free(head);
	head = tmp;
	}
}
