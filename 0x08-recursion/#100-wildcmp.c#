#include "holberton.h"
/**
* wildcmp - function that compares between two strings
* @s1: string 1.
* @s2: string 2.
* Return: either 0 or 1.
*/

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
	if (*s2 == '\0')
	return (1);
	if (*s2 == '*')
	return (wildcmp(s1, s2 + 1));
	}
		if (*s1 == *s2 && *s1 != '\0')
		return (wildcmp(s1 + 1, s2 + 1));
			if (*s2 == '*')
			return ((wildcmp(s1 + 1, s2)) || (wildcmp(s1, s2 + 1)));
return (0);
}
