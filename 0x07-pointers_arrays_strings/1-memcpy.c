#include "holberton.h"
/**
* *_memcpy - function that copies memory area.
* @dest: char.
* @src: char.
* @n: unsigned int.
* Return: pointer to dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	dest[i] = src[i];
	++i;
	}
return (dest);
}
