#include "holberton.h"
#include <stdlib.h>
/**
* alloc_grid - function that returns a pointer to a 2 dimensional array.
* @width: width.
* @height: height.
* Return: NULL.
*/
int **alloc_grid(int width, int height)
{
int i, j, **d;

	if (height < 1 || width < 1)
	return ('\0');
	d = malloc(height * sizeof(int *));
		if (d == '\0')
		{
		free(d);
		return ('\0');
		}
			for (i = 0; i < height; i++)
			{
			d[i] = malloc(width * sizeof(int));
				if (d[i] == '\0')
				{
					for (i--; i >= 0; i--)
					free(d[i]);
					free(d);
					return ('\0');
				}
			}
	for (i = 0; i < height; i++)
	for (j = 0; j < width; j++)
	d[i][j] = 0;
	return (d);
}
