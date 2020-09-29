#include "holberton.h"
/**
* print_rev - function that prints a string in reverse.
* @s: character.
* Return: a reversed string.
*/
void print_rev(char *s)
{
	char *d;

	d = s;
	while (*s != '\0')
	{
	s++;
	}
			while (s != d)
			{
			s--;
			_putchar(*s);
			}
	_putchar('\n');
}
