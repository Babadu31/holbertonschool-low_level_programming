#include "main.h"

/**
 * reverse_array - inverse un tableau d'entiers
 * @a: tableau à inverser
 * @n: nombre d'éléments dans le tableau
 */

void reverse_array(int *a, int n)
{
int x, y, tmp;
y = n - 1;

for (x = 0; x < n / 2; x++)
{
tmp = a[x];
a[x] = a[y];
a[y--] = tmp;
}
}
