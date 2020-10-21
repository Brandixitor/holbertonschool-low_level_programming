#include "function_pointers.h"
/**
* int_index - function that searches for an integer.
* @array: array.
* @size: number of elements in the array.
* @cmp: pointer to the function to the used.
* Return: either -1 or 0.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

	if (size <= 0)
	return (-1);
		if (size && cmp != NULL && array != NULL)
		{
			while (i < size)
			{
			if (cmp(array[i]) != 0)
			return (i);
			i++;
			}
		}
	return (-1);
}
