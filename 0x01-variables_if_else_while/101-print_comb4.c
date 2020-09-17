#include <stdio.h>
/**
*main - maine function
*Return: 0
*/
int main(void)
{
int x, e, r;

for (x = '0'; x <= '9'; ++x)
{
for (e = x; e <=  '9'; ++e)
{
for (r = e; r <=  '9'; ++r)
{
if (x != e && != r && e != r)
{
if (x != '0' ||e != '1' || r != '2')
{
putchar(',');
putchar(' ');
}
putchar(x);
putchar(e);
putchar(r);
}
}
}
}

putchar('\n');
return (0);
}
