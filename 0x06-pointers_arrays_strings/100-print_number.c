#include "holberton.h"
/**
 * print_number - function that prints an integer.
 * @n: integer.
 * Return: printed integer.
 */

void print_number(int n)
{
unsigned int num, coeff = 1;

num = n;
	while (n / 10)
	{
	coeff = coeff * 10;
	n /= 10;
	}
		if (n < 0)
		{
		_putchar('-');
		num = num * -1;
		}
	while (coeff >  0)
	{
	if (!(coeff == 1))
		{
		_putchar((num / coeff) + '0');
		num = num - (coeff * (num / coeff));
		}
			else
			_putchar(num + '0');
			coeff /= 10;
	}
}
