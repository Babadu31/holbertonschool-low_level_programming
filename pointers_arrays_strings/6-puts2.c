#include "main.h"

/**
 * puts2 - le point d'entrée imprime tous les autres caractères d'une chaîne
 * @str: chaine de caractère
 */

void puts2(char *str)
{

int y, x;
y = 0;

while (str[y] != '\0')
{
y++;
}
for (x = 0; x < y; x += 2)
{
_putchar(str[x]);
}
_putchar('\n');
}
