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
return (1);
}
else
{
return (0);
}
}
