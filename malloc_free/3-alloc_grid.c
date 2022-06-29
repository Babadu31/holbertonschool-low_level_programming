#include "main.h"
	#include <stdlib.h>

/**
 * alloc_grid - renvoie un pointeur vers un tableau
 * d'entiers à 2 dimensions
 * @width: largeur du tableau
 * @height: hauteur du tableau
 * Return: un double pointeur vers le tableau 2D
 */

int **alloc_grid(int width, int height)
{
int c1, c2;
int **lien;

if (width <= 0 || height <= 0)
return (NULL);
lien = (int **)malloc(sizeof(int *) * height);
if (lien == NULL)
return (NULL);
for (c1 = 0; c1 < height; c1++)
{
lien[c1] = (int *)malloc(sizeof(int) * width);
if (lien[c1] == NULL)
{
for (c2 = 0; c2 < c1; c2++)
free(lien[c2]);
free(lien);
return (NULL);
}
for (c2 = 0; c2 < width; c2++)
{
lien[c1][c2] = 0;
}
}
return (lien);
}
