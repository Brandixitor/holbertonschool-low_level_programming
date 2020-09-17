#include <stdio.h>
/**
*main - maine function
*Return: 0
*/
int main(void)
{
int x, e, z;

for (x = '0'; x <= '9'; ++x)
{
for (e = x; j <=  '9'; ++e)
{
for (z = e; z <=  '9'; ++z)
{
if (x != e && x != z && e != z)
{
if (x != '0' || e != '1' || z != '2')
{
putchar(',');
putchar(' ');
}
putchar(x);
putchar(e);
putchar(z);
}
}
}
}

putchar('\n');
return (0);
}
