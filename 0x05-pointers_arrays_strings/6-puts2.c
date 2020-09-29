#include "holberton.h"
/**
* puts2 - main function that prints every character of a string.
* @str: character.
* Return: charcters.
*/
void puts2(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		if (i % 2 == 0)
		{
		_putchar(*str);
		}
	str++;
	i++;
	}
_putchar('\n');
}
