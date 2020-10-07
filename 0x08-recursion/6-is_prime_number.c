#include "holberton.h"
/**
* st - function that returns the prime number.
* @i: integer.
* @j: integer.
* Return: integer.
*/

int st(int i, int j)
{
	if (i % j == 0)
	return (0);
	if (j > (i / 2))
	return (1);
return (st(i, ++j));
}




/**
* is_prime_number - function that returns a prime number.
* @n: integer.
* Return: integer.
*/

int is_prime_number(int n)
{
return (st(2, n));
}
