#include "holberton.h"
#include <stdlib.h>
/**
* _strdup - function that returns a pointer to a newly allocated space.
* @str: char.
* Return: Either NULL or a pointer.
*/
char *_strdup(char *str)
{
char *ch;
unsigned int size, i;

size = 0;
i = 0;
	if (str == 0)
	return (NULL);
		while (str[size] != '\0')
		{
		size++;
		}
	size++;
	ch = malloc(sizeof(char) * size);
			if (ch == 0)
			return (NULL);
				for (i = 0; i < size; i++)
				{
				ch[i] = str[i];
				}
ch[i] = '\0';
return (ch);
}
