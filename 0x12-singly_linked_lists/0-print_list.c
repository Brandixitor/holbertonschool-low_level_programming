#include "lists.h"
/**
* size_t - function that prints all elements of a list_t list.
* @list_t: linked list.
* Return: it depends on list_t.
*/
size_t print_list(const list_t *h)
{
const list_t *p;
char *str;
unsigned int sum = 0;

p = NULL;
p = h;
	while (p)
	{
	str = p->str;
	if (str == NULL)
	str = "(nil)";
	printf("[%u] %s\n", p->len, str);
	sum++;
	p = p->next;
	}
return (sum);
}
