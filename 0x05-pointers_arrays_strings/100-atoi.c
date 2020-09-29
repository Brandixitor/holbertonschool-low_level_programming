#include "holberton.h"
/**
* incase - Breaks the code into parts.
* @s: the string.
* @num: Current number.
* Return: Integer.
*/
int incase(char *s, int num)
{
	switch (*s)
	{
	case '0':
	num = num * 10 + 0;
	break;
	case '1':
	num = num * 10 + 1;
	break;
	case '2':
	num = num * 10 + 2;
	break;
	case '3':
	num = num * 10 + 3;
	break;
	case '4':
	num = num * 10 + 4;
	break;
	case '5':
	num = num * 10 + 5;
	break;
	case '6':
	num = num * 10 + 6;
	break;
	case '7':
	num = num * 10 + 7;
	break;
	case '8':
	num = num * 10 + 8;
	break;
	case '9':
	num = num * 10 + 9;
	break;
	}
	return (num);
}




/**
* _atoi - converts a string to an integer.
* @s: the string.
* Return: the converted string to an integer.
*/
int _atoi(char *s)
{
	int num, sig;

	sig = 1;
	num = 0;
	while (*s != '\0')
	{
		if (*s == '-')
		{
			sig *= -1;
		}
		while (*s >= '0' && *s <= '9')
		{
			num = incase(s, num);
			s++;
			if (!(*s >= '0' && *s <= '9'))
			{
				return (num * sig);
			}
		}
		s++;
	}
	return (0);
}
