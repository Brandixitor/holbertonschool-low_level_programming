#include "holberton.h"
/**
* get_endianness - function that checks all endianness.
* Return: either 0 or 1.
*/

int get_endianness(void)
{
unsigned int i = 1;
char *ch = (char *)&i;

	if (*ch)
	return (1);
		else
		return (0);
}
