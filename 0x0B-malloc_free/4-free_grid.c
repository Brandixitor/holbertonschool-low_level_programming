#include "holberton.h"
#include <stdlib.h>
/**
* free_grid - function that frees a 2D grid.
* @grid: grid address.
* @height: height.
* Return: ...
*/
void free_grid(int **grid, int height)
{
int i;

i = 0;
	while (i < height)
	{
	free(grid[i]);
	free(grid);
	i++;
	}
}
