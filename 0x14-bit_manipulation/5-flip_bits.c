#include "holberton.h"
/**
* flip_bits - function that returns the number of bits you would need to flip.
* @n : unsigned long int.
* @m : unsigned long int.
* Return: number of bits you would need to flip.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int j;
int i = 0;

	j = n ^ m;
		while (j >= 1)
		{
		if ((j & 1) == 1)
		i++;
		j >>= 1;
		}
return (i);
}
