#include "holberton.h"
#include <stdlib.h>
/**
* free_dog - function that frees a dog.
* @d: pointer.
* Return: freed dog.
*/

void free_dog(dog_t *d);
{
	if (d != NULL)
		{
			free(d->name);
			free(d->owner);
			free(d->d);
		}
}
