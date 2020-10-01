#include "holberton.h"
/**
* cap_string - Function that capitalizes all words of a string.
* @str: string.
* Return: a capitalized string.
*/

char *cap_string(char *str)
{
int i;

i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
	{
	str[0] = str[0] - 'a' + 'A';
	}
		for (i = 0; str[i] != '\0'; i++)
		{
			if (str[i - 1] == ' ' || str[i - 1] ==  ',' ||
		str[i - 1] ==  '.' || str[i - 1] ==  ';' || str[i - 1] ==  '{' ||
		str[i - 1] ==  '!' || str[i - 1] ==  '(' || str[i - 1] ==  '}' ||
		str[i - 1] ==  '?' || str[i - 1] ==  ')' ||
		str[i - 1] == 9 || str[i - 1] == 10 ||  str[i - 1] == 0 || str[i - 1] == 32)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
			str[i] = str[i] - 'a' + 'A';
			}
	}
		}
return (str);
}
