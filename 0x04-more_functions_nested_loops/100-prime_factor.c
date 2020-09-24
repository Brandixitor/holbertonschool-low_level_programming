#include <stdio.h>
/**
* main - prints the largest prime factor of the number 612852475143.
*
* Return: 0.
*/
int main(void)
{
	long int i, j, n, p;

	n = 612852475143 / 2;
	for (i = 2; i <= n; i++)
	{
	if (n % i == 0)
	{
			p = 1;
			for (j = 2; j <= i / 2; j++)
			{
				if (i % j == 0)
				{
					p = 0;
					break;
				}
			}
			if (p == 1)
			{
				printf("\n %d is a Prime Factor ", i);
			}
		}
}
	return (0);
}
