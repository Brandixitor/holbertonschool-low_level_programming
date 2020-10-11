#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
*main - function serving as a change machine.
*@argc: argument count.
*@argv: argument vector.
*Return: 0
*/
int main(int argc, char *argv[])
{
int i, j, k, l = 0;
int cent[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}
k = atoi(argv[1]);
		if (k < 1)
		printf("0\n");
	else
	{
		for (i = 0; i < 5 && k; i++)
		{
		j = k / cent[i];
		l += j;
		k -= j * cent[i];
		}
	printf("%d\n", l);
	}
return (0);
}
