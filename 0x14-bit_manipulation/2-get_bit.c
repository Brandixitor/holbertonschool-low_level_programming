#include "holberton.h"
#include <stddef.h>
/**
* get_bit - function that returns the value of a bit at a given index.
* @n: unsigned int.
* @index:index unsigned int.
* Return: either 0, 1 or -1.
*/

int get_bit(unsigned long int n, unsigned int index)
{
if (sizeof(n) * 8 < index)
return (-1);

	n >>= index;
	if ((n & 1) == 1)
	return (1);
		else
		return (0);
}
