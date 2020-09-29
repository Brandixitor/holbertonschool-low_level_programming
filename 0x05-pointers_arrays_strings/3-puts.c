#include "holberton.h"
/**
* _puts - function that prints a string to stdout.
* @str: string.
* Return: nothing.
*/
void _puts(char *str)
	{
int i;

i = 0;
while (*str != '\0')
{
_putchar(*str);
str++;
i++;
}
_putchar('\n');
	}
