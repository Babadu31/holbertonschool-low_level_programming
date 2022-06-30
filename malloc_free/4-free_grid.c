#include "main.h"
#include <stdlib.h>

/**
 * free_grid - libère une grille à 2 dimensions
 * @grid: double pointeur de la grille à 2 dimensions
 * @height: taille de la grille
 */

void free_grid(int **grid, int height)
{
int x;

for (x = 0; x < height; x++)
free(grid[x]);
free(grid);
}
