#include "dog.h"
#include <stdlib.h>
/**
* new_dog - function that create a new dog.
* @name: dog's name.
* @age: dog's age.
* @owner: dog's owner.
* Return: pointer to struct.
**/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int i = 0, len1 = 0, len2 = 0;

	dog = malloc(sizeof(dog_t));
		if (dog == NULL)
		return (NULL);
			for (; name[len1] != '\0'; len1++)
			;
				for (; owner[len2] != '\0'; len2++)
				;
					dog->name = malloc((len1 + 1) * sizeof(char));
		if (dog->name == NULL)
		{
		free(dog->name);
		return (NULL);
		}
	dog->owner = malloc((len2 + 1) * sizeof(char));
	if (dog->owner == NULL)
	{
	free(dog->name);
	free(dog->owner);
	free(dog);
	return (NULL);
	}
			for (i = 0; i <= len1; i++)
			dog->name[i] = name[i];
			dog->age = age;
	for (i = 0; i <= len2; i++)
	dog->owner[i] = owner[i];
	return (dog);
}
