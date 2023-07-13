#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimension grid
 * @grid: a pointer to pointer
 * @height: height of the array
 *
 * Description: return required result
 *
 * Return: return void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
