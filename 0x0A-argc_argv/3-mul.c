#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
* main - function that multiplies two numbers.
* @argc: argument count.
* @argv: argument vector.
* Return: either 0 or 1.
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}
		else
	{
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
return (0);
}
