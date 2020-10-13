#include "holberton.h"
#include <stdlib.h>
/**
* str_concat - function that concatenates two strings.
* @s1: string 1.
* @s2: string 2.
* Return: a concatenated string.
*/
char *str_concat(char *s1, char *s2)
{
char *ch;
int i, j, k;

i = 0;
j = 0;
k = 0;
	if (s1 != NULL)
	{
		while (s1[i])
		{
		i++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[j])
		{
		j++;
		}
	}
ch = malloc((i + j + 1) * sizeof(char));
	if (ch == NULL)
	{
	return (NULL);
	}

	while (k < i)
	{
	ch[k] = s1[k];
	k++;
	}

	while (k < i + j)
	{
	ch[k] = s2[k - i];
	k++;
	}
	ch[k + 1] = '\0';
	return (ch);
}
