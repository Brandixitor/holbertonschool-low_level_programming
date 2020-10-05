#include "holberton.h"
/**
* *_memset - function that fills memory with a constant byte.
* @s: memory area.
* @b: constant byte.
* @n: unsigned int.
* Return: pointer to a memory area s.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	++i;
	}
return (s);
}
