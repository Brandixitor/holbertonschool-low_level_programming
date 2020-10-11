#include <stdio.h>
/**
* main - function that prints the name of the program.
* @argc: argument count.
* @argv: argument vector.
* Return: 0.
*/

int main(int argc, char *argv[])
{
int i = 0;

	while (i  < argc)
		{
		printf("%s", *argv);
		return (0);
		i++;
		}
}
