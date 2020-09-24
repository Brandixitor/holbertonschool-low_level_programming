#include "holberton.h"
/**
*print_number - prints an integer.
*@n: integer to print.
* Return: the integer to print.
*/
void print_number(int n)
{
int i, j;

i = n;
j = 0;
if (n > 0)
{
i = n;
}
else if (n < 0)
{
i = -n;
_putchar('-');
}
if (n != 0)
{
while (i > 0)
{
j = (j * 10) + (i % 10);
i = i / 10;
}
while (j > 0)
{
_putchar(j % 10 + '0');
j = j / 10;
}
}
else
{
_putchar('0');
}
}
