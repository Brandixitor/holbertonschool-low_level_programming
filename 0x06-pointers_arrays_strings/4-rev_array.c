#include "holberton.h"
/**
* reverse_array - function that reverses an array.
* @a: integer.
* @n: integer.
* Return: a reversed array.
*/

void reverse_array(int *a, int n)
{
int i, aux;

aux = 0;
i = 0;
	for (i = 0; i < n / 2 ; i++)
	{
	aux = a[i];
	a[i] = a[n - i - 1];
	a[n - i - 1] = aux;
	}
}
