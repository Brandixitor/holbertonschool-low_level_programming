#include <stdio.h>
/**
* main - prints the largest prime factor of the number 612852475143.
*
* Return: 0.
*/
int main(void)
{
long int n;
long int i, j;

t = 612852475143 / 2;
for (i = n; i > 2; --i)
{
if (n % i == 0)
{
for (j = 2; j <= i / 2; ++j)
{
if (i % j == 0)
{
break;
}
}
if (j == i)
{
printf("%ld\n", i);
return (0);
}
}
}
return (1);
}
