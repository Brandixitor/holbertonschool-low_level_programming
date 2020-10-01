#include "holberton.h"
/**
* string_toupper - function that turns a string to lowercase to uppercase.
* @str: string.
* Return: A string in uppercase
*/

char *string_toupper(char *str)
{
int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
		str[i] = str[i] - 'a' + 'A';
		}
	}
return (str);
}
