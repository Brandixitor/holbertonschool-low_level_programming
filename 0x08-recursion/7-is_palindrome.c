#include "holberton.h"
/**
* _strlen_recursion - function that returns the length of a string.
* @s: char.
* Return: length.
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




/**
* pldrm - function that finds the palindromic character.
* @s: char.
* @len: integer.
* @i: integer.
* Return: a palondromic character.
*/

int pldrm(char *s, int len, int i)
{
	if (s[i] == s[len - i] && i == len / 2)
	{
	return (1);
	}
	else
	if (s[i] == s[len - i])
	{
	return (pldrm(s, len, i + 1));
	}
	else
	return (0);
}



/**
* is_palindrome - final output.
* @s: char.
* Return: final output.
*/
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (pldrm(s, len - 1, 0));
}
