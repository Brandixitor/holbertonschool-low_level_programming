#include "holberton.h"
/**
* free_dog - function that frees a dog.
* @d: pointer.
* Return: freed dog.
*/

void free_dog(dog_t *d);
{
	if (d)
		{
			free(d->name);
			free(d->age);
			free(d->age);
		}
}
