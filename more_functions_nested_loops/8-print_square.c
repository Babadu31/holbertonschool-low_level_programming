#include "main.h"

/**
 * print_square - imprime un carré
 * @taille: nombre de carré (hashtag)
 */

void print_square(int taille)
{
if (taille <= 0)
{
_putchar('\n');
}
else
{
int a, b;

for (a = 0; a < taille; a++)
{
for (b = 0; b < taille; b++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
