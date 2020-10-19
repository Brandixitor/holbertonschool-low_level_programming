#include "dog.h"
/**
*init_dog - gilmour
*@d:var.
*@name: the  name
*@age: the age
*@owner:the owner
*Return: Always 0
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	while  (d == 0)
	return;
		d->name = name;
		d->age = age;
		d->owner = owner;
}
