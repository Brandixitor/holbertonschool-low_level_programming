#include "holberton.h"
/**
* co - function that returns the natural square root of a number.
* @i: integer.
* @n: integer.
* Return: ..
*/

int co(long int i, long int n)
{
	if (i * i ==  n)
	return (i);
	else
	if (i * i > n)
	return (-1);
	else
	if (n < 0)
	return (-1);
	return (co(i + 1, n));
}





/**
* _sqrt_recursion - recursive part.
* @n: integer.
* Return: ..
*/
int _sqrt_recursion(co(1, n))
{
	return (co(1, n));
}
