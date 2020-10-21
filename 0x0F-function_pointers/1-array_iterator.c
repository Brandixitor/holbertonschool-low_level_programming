#include "function_pointers.h"
#include <stdlib.h>
/**
* array_iterator - function that executes a function given as a parameter on-
* -each element of an array.
* @array: array.
* @size: size of the array.
* @action: pointer to function to use.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;

	if (size && action != NULL && array != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
