#include <stdio.h>
/**
*main - main function
*
*Return: 0
*/
int main(void)
{
unsigned int x, e;

for (x = 0; x <= 99; ++x)
{
for (e = x; e <= 99; ++e)
{
if (x != e)
{
if (x != 0 || e != 1)
{
putchar(',');
putchar(' ');
}
putchar(x / 10 + '0');
putchar(x % 10 + '0');
putchar(' ');
putchar(e / 10 + '0');
putchar(e % 10 + '0');
}
}
}

putchar('\n');
return (0);
}
