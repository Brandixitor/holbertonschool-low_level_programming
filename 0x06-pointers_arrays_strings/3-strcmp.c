#include "holberton.h"
/**
* _strcmp - function that compares two strings.
* @s1: first string.
* @s2: second string.
* Return: value.
*/

int _strcmp(char *s1, char *s2)
{

int j, i;

i = 0;
j = 0;
	while (s1[i] != '\0')
	{
	i++;
	}

		while (s1[j] == s2[j] && j < i)
		{
		j++;
		}

return (s1[j] - s2[j]);
}
