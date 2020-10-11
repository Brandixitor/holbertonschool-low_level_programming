#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
*main - function that adds two positive integers.
*@argc: argument count.
*@argv: argument vector.
*Return: 0
*/

int main(int argc, char *argv[])
{
int i, j, k;

i = 1;
k = 0;
	while (i < argc)
	{
	j = 0;
		while (j < argv[i][j])
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
			{
			printf("Error\n");
			return (1);
			}
		j++;
		}
	k += atoi(argv[i]);
	i++;
	}
printf("%d\n", k);
return (0);
}
