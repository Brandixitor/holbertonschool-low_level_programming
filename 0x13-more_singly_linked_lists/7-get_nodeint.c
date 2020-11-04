#include "lists.h"
/**
* get_nodeint_at_index - function that returns the node index.
 * @head: pointer to the node.
 * @index: given index int.
 * Return:index of node or NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
size_t x;

	for (x = 0; x < index && head->next; x++)
	{
	head = head->next;
	}
		if (x < index)
		return (NULL);
return (head);
}
