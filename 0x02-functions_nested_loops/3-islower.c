#include "holberton.h"
/**
*_islower - 0
*@c: an integer
*Return: either 0 or 1
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (0);
}
else
{
return (1);
}
}
