#include "holberton.h"
/**
* _strspn - function that gets the length of a prefix substring.
* @s: char.
* @accept: char.
* Return: length of a prefix substring.
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, n;

i = 0;
j = 0;
	while (s[j] != '\0' && s[j] != ' ')
	{
		n = 0;
		while (accept[n] != '\0')
		{
			if (accept[n] == s[j])
			{
			i += 1;
			}
			n++;
		}
		j++;
	}


return (i);
}
