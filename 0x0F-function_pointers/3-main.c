#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - Right code to perform the operations.
* @argc: argument count.
* @argv: argument vector.
* Return: 0 on success.
*/

int main(int argc, char *argv[])
{
int a = 0, b = 0;
char arg = *argv[2];
int (*com)(int, int);
int result;

	if (argc != 4)
	{
	printf("Error\n");
	exit(98);
	}
		if ((arg == '/' && atoi(argv[3]) == 0) || (arg == '%' && atoi(argv[3]) == 0))
		{
		printf("Error\n");
		exit(100);
		}
			com = get_op_func(argv[2]);
			if (com == NULL)
			{
			printf("Error\n");
			exit(99);
			}
a = atoi(argv[1]);
b = atoi(argv[3]);
result = com(a, b);
printf("%d\n", result);
return (0);
}
