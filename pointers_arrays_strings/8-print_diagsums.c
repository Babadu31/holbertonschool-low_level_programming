#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - imprime la somme des deux diagonales
 * d'une matrice carrée d'entiers
 * @a: matrice carrée dont on imprime la somme des diagonales
 * @size: taille de la matrice
 */

void print_diagsums(int *a, int size)
{
int x;
unsigned int somme1, somme2;
somme1 = 0;
somme2 = 0;

for (x = 0; x < size; x++)
{
somme1 += a[(size * x) + x];
somme2 += a[(size * (x + 1)) - (x + 1)];
}
printf("%d, %d\n", somme1, somme2);
}
