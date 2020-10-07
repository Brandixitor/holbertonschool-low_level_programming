#include "holberton.h"
/**
* st - function that returns the prime number.
* @i: integer.
* @j: integer.
* Return: integer.
*/

int st(int i, int j)
{
	if (i < 0)
	{
	return (0);
	}
	if (j == 1)
	{
	return (0);
}
return (st(j, i - 1));
}




/**
* is_prime_number - function that returns a prime number.
* @n: integer.
* Return: integer.
*/

int is_prime_number(int n)
{
	if (n == 1)
	{
	return (0);
	}
		if (n < 0)
		{
		return (0);
		}
return (st(n, n - 1));
}
