#include <stdio.h>
#include <stdlib.h>
/**
* main - prints opcode of own main function
* @argc: argument count
* @argv: arg value
* Return: int
*/

int main(int argc, char *argv[])
{
int i, j;
unsigned char *p;

	if (argc != 2)
	{
	printf("Error\n");
	exit(1);
	}
j = atoi(argv[1]);
		if (j < 0)
		{
		printf("Error\n");
		exit(2);
		}
p = (unsigned char *)main;
i = 0;
	if (j > 0)
	{
		while (i < (j - 1))
		printf("%02hhx ", p[i++]);
		printf("%hhx\n", p[i]);
	}
return (0);
}
