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
int cent, coin;

coin = 0;
	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}
cent = atoi(argv[1]);
			if (cent <= 0)
			{
			printf("0\n");
			return (1);
			}
	while (cent > 0)
	{
		if (cent >= 25)
		{
		coin++;
		cent -= 25;
		}
	else if
	(cent >= 10)
		{
		coin++;
		cent -= 10;
		}
	else if
		(cent >= 5)
		{
		coin++;
		cent -= 5;
		}
	else if
		(cent >= 2)
		{
		coin++;
		cent -= 2;
		}
	else if
		(cent >= 1)
		{
		coin++;
		cent -= 1;
		}
	}
printf("%d\n", coin);
return (0);
}
