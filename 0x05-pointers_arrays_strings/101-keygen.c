#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Function that generates and cracks passwords.
* Different variables.
* Return: 0
*/

int main(void)
{
	char pass[60] = "\0";
	char h[63] = "abcdefghijklmnopqrstuvwxyz0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int s = 0, i = 0, tempo = 0;

	srand(time(NULL));
	while (s < 2772 - 'z')
	{
		tempo = rand() % 62;
		s += h[tempo];
		pass[i++] = h[tempo];
	}

	pass[i] = (2772 - s);
	pass[i + 1] = '\0';

	printf("%s", pass);
	return (0);
}
