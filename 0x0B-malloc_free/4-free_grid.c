#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees 2d array
 *
 * @grid: 2d grid
 * @height: height dimension of grid
 *
 * Description: frees memory of grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
    int i;

    if (grid == NULL)
        return;

    for (i = 0; i < height; i++)
    {
        if (grid[i] != NULL)
            free(grid[i]);
    }

    free(grid);
}

