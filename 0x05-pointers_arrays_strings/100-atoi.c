#include "holberton.h"
/**
* _atoi - Transforms a string to an integer.
* @s: the string.
* Return: Integer.
*/
int _atoi(char *s)
{
	int i, fn = 1, ne = 1;
	unsigned int n = 0;

	i = 0;
	while (s[i] && fn)
	{
		if (s[i] == '-' && !n)
			ne *= -1;
		if (s[i] >= '0' && s[i] <= '9' && fn)
		{
			n *= 10;
			n += s[i] - '0';
		}
		else if (n > 0)
			fn = 0;
		i++;
	};
	n *= ne;
	return (n);
}
