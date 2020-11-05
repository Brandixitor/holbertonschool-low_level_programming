#include "holberton.h"
/**
* clear_bit - function that sets the value to 1 with the given index.
* @n:pointer to unsigned int.
* @index: unsigned int index.
* Return: 1 if succes -1 in case of error.
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int i = 1;

	if (sizeof(n) * 8 < index)
	return (-1);
		i <<= index;
		*n &= ~i;
return (1);
}
