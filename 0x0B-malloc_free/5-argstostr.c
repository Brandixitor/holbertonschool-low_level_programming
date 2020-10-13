#include "holberton.h"
#include <stdlib.h>
/**
* argstostr - function that concatenates all the arguments of the program.
* @ac: argument count.
* @av: argument vector.
* Return: concatenated strings take from arguments.
**/

char *argstostr(int ac, char **av)
{
int i = 0, j = 0, k = 0, l = 0;
char *ch;

	if (ac == 0 || av == NULL)
	return (NULL);
		for (; i < ac; i++)
		{
		j = 0;
			for (; av[i][j] != '\0'; j++)
			k++;
		}
ch = malloc(k + ac + 1 * sizeof(char));
	if (ch == NULL)
	return (NULL);
		for (i = 0; i < ac; i++)
		{
		j = 0;
			for (; av[i][j] != '\0'; j++)
			{
			ch[l] = av[i][j];
			l++;
			}
		ch[l] = '\n';
		l++;
		}
return (ch);
}
