#include "main.h"

/**
 * swap_int - échange les valeurs de deux entiers
 * @a: pointeur de la première valeur
 * @b: pointeur de la deuxième valeur
 */

void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
