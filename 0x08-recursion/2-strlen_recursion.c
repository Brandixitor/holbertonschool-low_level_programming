#include "holberton.h"
/**
* _strlen_recursion - function that prints the length of a string.
*@s: string.
* Return: ..
*/
int _strlen_recursion(char *s)
{
int i = 1;

	{
	if (*s == '\0')
	return (0);
	return (i + _strlen_recursion(s + 1));
	}
}
