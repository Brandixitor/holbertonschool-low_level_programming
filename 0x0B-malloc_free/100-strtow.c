#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
* split - function that counts the words found in a string.
* @str: string.
* Return: Number of words found in the string.
**/

int split(char *str)
{
int i = 0, word = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i - 1] == ' ')
			word++;
		i++;
	}
	return (word);
}

/**
* strtow - function that splits a string into words.
* @str: string.
* Return: Array of words.
**/
char **strtow(char *str)
{
int word = 0, i = 0, j = 0, k = 0, l = 0, m = 0;
char **ch;

	if (str == NULL)
	return (NULL);
	word = split(str);
	ch = malloc(1 + word * sizeof(char *));
		if (ch == NULL)
		{
		return (NULL);
		}
i = 0, l = 0;
		for (j = 0; j < word; j++)
		{
		k = 0, m = 0;
			for (; str[i] == ' '; i++)
			;
				for (; str[i] != ' '; i++)
				k++;
				k = k + 1;
				ch[j] = malloc(k * sizeof(char));
		if (ch[j] == NULL)
		{
		for (; j >= 0; j--)
		free(ch[j]);
		free(ch);
		}
			for (; str[l] == ' '; l++)
			;
				for (; str[l] != ' ' && m <= k; l++)
				{
				ch[j][m] = str[l];
				m++;
				}
		ch[j][m] = '\0';
		}
return (ch);
}
