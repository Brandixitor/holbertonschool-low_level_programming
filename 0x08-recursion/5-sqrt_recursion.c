#include "holberton.h"
/**
* _sqrt - function that returns the natural square root of a number.
* @i: integer.
* @n: integer.
* Return: ..
*/

int _sqrt(int i, int n)
{
	if (i * i == n)
	return (i);
	else
	if (i == n)
	return (-1);
	else
	if (n < 0)
	return (-1);
	return (_sqrt(i + 1, n));
}





/**
* _sqrt_recursion - recursive part.
* @n: integer.
* Return: ..
*/
int _sqrt_recursion(_sqrt(1, n));
{
	return (_sqrt(1, n));
}
