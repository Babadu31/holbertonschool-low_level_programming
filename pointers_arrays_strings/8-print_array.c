#include "main.h"
#include <stdio.h>

/**
 * print_array - Point d'accès
 * @a: tableau à imprimer
 * @n: nombre d'éléments à imprimer
 */

void print_array(int *a, int n)
{
int x;

for (x = 0; x < n; x++)
{
if (x == 0)
printf("%d", a[x]);
else
printf(", %d", a[x]);
}
printf("\n");
}
