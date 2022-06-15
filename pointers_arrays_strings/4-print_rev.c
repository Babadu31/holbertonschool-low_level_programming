#include "main.h"

/**
 * print_rev - imprime une chaîne à l'envers, suivie d'une nouvelle ligne
 * @s: chaîne à imprimer
 */

void print_rev(char *s)
{

int x, y, taille;

x = 0;

while (s[x] != '\0')
{
x++;
}

taille = x;

for (y = taille - 1; y >= 0; y--)
{
_putchar(s[y]);
}

_putchar('\n');
}
