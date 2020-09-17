#include <stdio.h>
/**
*main - main function
*
*Return: 0
*/
int main(void)
{
int x, e;

for (x = '0'; x <= '9'; ++x)
{
for (e = x; e <=  '9'; ++e)
{
if (x != e)
{
if (x != '0' || e != '1')
{
putchar(',');
putchar(' ');
}
putchar(x);
putchar(e);
}
}
}

putchar('\n');
return (0);
}
