#include "holberton.h"
/**
* incase - Breaks the code into parts.
* @s: the string.
* @num: Current number.
* Return: Integer.
*/
int _atoi(char *s)
{
	int j, firstNumber = 1, negatif = 1;
	unsigned int num = 0;

	j = 0;
	while (s[j] && firstNumber)
	{
		if (s[j] == '-' && !num)
			negatif *= -1;
		if (s[j] >= '0' && s[j] <= '9' && firstNumber)
		{
			num *= 10;
			num += s[j] - '0';
		}
		else if (num > 0)
			firstNumber = 0;
		j++;
	};
	num *= negatif;
	return (num);
}
