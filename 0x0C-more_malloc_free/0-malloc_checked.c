#include "holberton.h"
#include <stdlib.h>
/**
* malloc_checked - function that allocates memory using malloc.
* @b: integer.
* Return: p.
*/
void *malloc_checked(unsigned int b)
{
void *p;

	ch = malloc(b);
	if (p == NULL)
	exit(98);
return (p);
}
