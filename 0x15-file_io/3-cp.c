#include "holberton.h"
/**
* copying - function that copies the content of file1 into file2.
* @i: file descriptor of the first file.
* @j: file descriptor of the second file.
* @av1: name of the first file.
* @av2: name of the second file.
*/

void copying(int i, int j, char *av1, char *av2)
{
int rl, rw;
char buffer[1024];

	while ((rl = read(i, buffer, 1024)) > 0)
	{
	rw = write(j, buffer, rl);
		if (rw == -1)
		{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av2);
		exit(99);
		}
	}

		if (rl == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av1);
	exit(98);
	}
}



/**
* main - function that copies the content of a file to another file.
* @ac: arguments count.
* @av: arguments vector.
* Return: 0.
*/

int main(int ac, char **av)
{
int i, j, c1, c2;

	if (ac != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}
		i = open(av[1], O_RDONLY);
			if (i == -1)
			{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
			}
j = open(av[2], O_WRONLY | O_TRUNC | O_CREAT,
S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (j == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
	exit(99);
	}
copying(i, j, av[1], av[2]);
c1 = close(i);
		if (c1 == -1)
		{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", i);
		exit(100);
		}
	c2 = close(j);
			if (c2 == -1)
			{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", j);
			exit(100);
			}
return (0);
}
