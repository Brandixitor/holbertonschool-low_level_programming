#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
*list_len - function that returns the number of elements in a linked list.
*@h: list_t.
*Return: int.
*/

size_t list_len(const list_t *h)
{
int  i = 0;

	while (h != NULL)
	{
	h = (*h).next;
	i++;
	}
	return (i);
}
