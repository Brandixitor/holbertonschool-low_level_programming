#include "holberton.h"
/**
 * _strlen - function that returns the length of string.
 * @s:char.
 * Return:length.
 */

int _strlen(const char *s)
{
int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	continue;
	}
return (i);
}



/**
* binary_to_uint - convert binary to unsigned int
* @b:string from 0 and 1 else NULL
* Return:unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int j = 1;
unsigned int i = 0;
int l;
unsigned int len;

	if (b == NULL)
	return (0);
len = _strlen(b);

	for (l = len - 1; l >= 0; l--)
	{
		if (b[l] != '0' && b[l] != '1')
		return (0);
			if (b[l] == '1')
			{
			i += j;
			}
	j *= 2;
	}
return (i);
}
