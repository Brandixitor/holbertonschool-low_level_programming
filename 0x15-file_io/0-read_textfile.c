#include "holberton.h"
/**
* read_textfile - function that reads a text file and prints it to POSIX.
* @filename: file path to open.
* @letters: number of letters to read and print to standard output.
* Return: 0 if it fails or the number of characters read and printed.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer = malloc(sizeof(char) * letters);
int i;
ssize_t rl, rw;

	if (filename == NULL)
	return (0);

	i = open(filename, O_RDWR);

		if (i == -1)
		return (0);

	rl = read(i, buffer, letters);

		if (rl < 0)
		return (0);

	rw = write(STDOUT_FILENO, buffer, rl);
	if (rw < 0)
	return (0);

free(buffer);
close(i);
return (rw);
}
