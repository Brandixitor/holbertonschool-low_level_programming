#include "holberton.h"
/**
* *_strpbrk - function that searchs a string for any of a set of bytes.
* @s: char.
* @accept: char.
* Return: set of bytes.
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
			return (&s[i]);
			}
		}
	}
return (0);
}
