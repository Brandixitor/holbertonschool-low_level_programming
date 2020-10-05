#include "holberton.h"
#include <stdio.h>
/**
*print_diagsums - 0
*@a: table
*@size: size of a
*
*/
void print_diagsums(int *a, int size)
{
int i;
long int nl, nc;

nl = 0;
nc = 0;
	for (i = 0; i < size; ++i)
	{
	nl += a[(size + 1) * i];
	}
		for (i = size - 1; i >= 0; --i)
		{
		nc += a[(size - 1) * (i + 1)];
		}
printf("%ld, %ld\n", nl, nc);
}
