#include "holberton.h"
#include <stdlib.h>
/**
* malloc_checked - function that allocates memory using malloc.
* @b: integer.
* Return: ch.
*/
void *malloc_checked(unsigned int b)
{
void *ch;

	ch = malloc(b);
	if (ch == NULL)
	exit(98);
return (ch);
}
